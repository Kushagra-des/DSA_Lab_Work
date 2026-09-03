#include <stdio.h>

void onlineInsertionSort(int arr[], int* n, int num) {
    int i = *n - 1;
    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = num;
    (*n)++;
}

int main() {
    int arr[50], n = 0, num;
    char choice;
    do {
        printf("Enter number: ");
        scanf("%d", &num);
        onlineInsertionSort(arr, &n, num);
        printf("Sorted so far: ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\nContinue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y');
    return 0;
}

#include <stdio.h>

void stableSelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;

        int key = arr[min];
        while (min > i) {
            arr[min] = arr[min - 1];
            min--;
        }
        arr[i] = key;
    }
}

int main() {
    int arr[] = {4, 5, 3, 2, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    stableSelectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

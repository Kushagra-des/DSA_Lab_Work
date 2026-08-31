#include <stdio.h>
#include <stdlib.h>
#include "rdm.h"

void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min]) min = j;

        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

        printf("After pass %d: ", i + 1);
        for (int k = 0; k < n; k++) printf("%d ", arr[k]);
        printf("\n");
    }
}

int main(void) {
    int n;
    printf("Enter size: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *arr = Rdm(n);
    if (!arr) return 1;

    printf("Original: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    selectionSort(arr, n);
    free(arr);
    return 0;
}

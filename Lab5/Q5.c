#include <stdio.h>
#include <stdlib.h>
#include "rdm.h"

int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int *arr, int low, int high, int n) {
    if (low >= high) return;

    int pi = partition(arr, low, high);

    printf("After partition: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    quickSort(arr, low, pi - 1, n);
    quickSort(arr, pi + 1, high, n);
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

    quickSort(arr, 0, n - 1, n);
    free(arr);
    return 0;
}

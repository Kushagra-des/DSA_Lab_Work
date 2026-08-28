#include <stdio.h>
#include <stdlib.h>
#include "rdm.h"

void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        printf("After pass %d: ", i + 1);
        for (int k = 0; k < n; k++) printf("%d ", arr[k]);
        printf("\n");
        if (!swapped) break;
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

    bubbleSort(arr, n);
    free(arr);
    return 0;
}

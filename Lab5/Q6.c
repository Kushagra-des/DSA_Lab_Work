#include <stdio.h>
#include <stdlib.h>
#include "rdm.h"

void merge(int *arr, int l, int m, int r, int n) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = malloc((size_t)n1 * sizeof(*L));
    int *R = malloc((size_t)n2 * sizeof(*R));
    if (!L || !R) {
        free(L);
        free(R);
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    printf("Merged: ");
    for (int t = 0; t < n; t++) printf("%d ", arr[t]);
    printf("\n");

    free(L);
    free(R);
}

void mergeSort(int *arr, int l, int r, int n) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m, n);
    mergeSort(arr, m + 1, r, n);
    merge(arr, l, m, r, n);
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

    mergeSort(arr, 0, n - 1, n);
    free(arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int search(int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int *arr, n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = search(arr, n, key);

    if (index != -1)
        printf("Element found at index %d.\n", index);
    else
        printf("Element not found.\n");

    free(arr);

    return 0;
}
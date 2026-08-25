#include <stdio.h>

int hasDuplicates(int arr[], int n) {
    int i, j;
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[100], n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(hasDuplicates(arr, n))
        printf("Array contains duplicates.\n");
    else
        printf("No duplicates found in the array.\n");
    return 0;
}

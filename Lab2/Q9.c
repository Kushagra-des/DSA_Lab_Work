#include <stdio.h>

int findMostFrequent(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return -1;
    }
    int maxFrequency = 0;
    int mostFrequentElement = arr[0];
    int i,j;
    for (i = 0; i < n; i++) {
        int currentFrequency = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                currentFrequency++;
            }
        }
        if (currentFrequency > maxFrequency) {
            maxFrequency = currentFrequency;
            mostFrequentElement = arr[i];
        }
    }
    return mostFrequentElement;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }
    int arr[n],k,l;
    printf("Enter %d elements for the array:\n", n);
    for (k = 0; k < n; k++) {
        printf("Element %d: ", k + 1);
        scanf("%d", &arr[k]);
    }
    int result = findMostFrequent(arr, n);

    if (result != -1) {
        printf("The element appearing maximum number of times is: %d\n", result);
    }
    return 0;
}

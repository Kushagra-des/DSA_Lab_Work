#include <stdio.h>
#include <string.h>

int main() {
    char arr[50];
    printf("Enter characters: ");
    scanf("%s", arr);
    int n = strlen(arr), shifts = 0;

    for (int i = 1; i < n; i++) {
        char key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array: %s\n", arr);
    printf("Number of shifts: %d\n", shifts);
    return 0;
}

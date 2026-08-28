#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* Rdm(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(0);
    }
    srand(time(0));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
    return arr;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int* arr = Rdm(n);

    printf("Random Array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}

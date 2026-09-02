#include <stdio.h>

int main() {
    int arr[20] = {2,4,5,6,8,9,10,13,15};
    int n = 9, elem, i;
    printf("Enter element to insert: ");
    scanf("%d", &elem);

    for (i = n - 1; i >= 0 && arr[i] > elem; i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = elem;
    n++;

    printf("After insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

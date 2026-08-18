#include <stdio.h>

void sort(int a[], int n, int asc) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if ((asc && a[j] > a[j+1]) || (!asc && a[j] < a[j+1])) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
}

int main() {
    int a[100], n, ch;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("1. Ascending\n2. Descending\nEnter choice: ");
    scanf("%d", &ch);

    sort(a, n, ch == 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
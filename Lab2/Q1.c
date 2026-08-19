#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    if (n == 0) {
    } else if (n == 1) {
        printf("%d", t1);
    } else {
        printf("%d, %d", t1, t2);

        for (i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            printf(", %d", nextTerm);
            t1 = t2;
            t2 = nextTerm;
        }
    }

    printf("\n");
    return 0;
}

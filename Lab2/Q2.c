#include <stdio.h>

long long sumOfSquares(int n) {
    long long sum = 0;
    int i;

    for (i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }
    return sum;
}

int main() {
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    long long seriesSum = sumOfSquares(n);

    printf("The sum of the series 1^2 + 2^2 + ... + %d^2 is: %lld\n", n, seriesSum);

    return 0;
}

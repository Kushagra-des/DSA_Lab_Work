#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    if (num == 0) {
        return 1;
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }
}

int main() {
    int n, r;
    long long nCr_value;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (r < 0 || r > n) {
        printf("Invalid input: r must be between 0 and n (inclusive).\n");
        return 1;
    }

    nCr_value = factorial(n) / (factorial(r) * factorial(n - r));

    printf("The nCr value for n=%d and r=%d is: %lld\n", n, r, nCr_value);

    return 0;
}

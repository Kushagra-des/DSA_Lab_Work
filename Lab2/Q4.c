#include <stdio.h>

int multiply_by_addition(int num1, int num2) {
    int product = 0;
    int i;

    if (num2 < 0) {
        num1 = -num1;
        num2 = -num2;
    }

    for (i = 0; i < num2; i++) {
        product += num1;
    }
    return product;
}

int main() {
    int number1, number2;
    int result;

    printf("Enter First Number: ");
    scanf("%d", &number1);

    printf("Enter Second Number: ");
    scanf("%d", &number2);

    result = multiply_by_addition(number1, number2);

    printf("The Product of %d and %d is: %d\n", number1, number2, result);

    return 0;
}

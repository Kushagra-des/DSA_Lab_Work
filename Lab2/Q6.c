#include <stdio.h>

void decimalToBinary(int n) {
    int binaryNum[32];
    int i = 0;
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary Number: ");
    int j;
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Enter Decimal Number: ");
    scanf("%d", &decimalNumber);

    decimalToBinary(decimalNumber);
    return 0;
}

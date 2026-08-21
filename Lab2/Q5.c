#include <stdio.h>
#include <math.h>

long long binaryToDecimal(long long binaryNum) {
    long long decimalNum = 0;
    int i = 0;
    int remainder;

    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        binaryNum /= 10;
        decimalNum += remainder * pow(2, i);
        ++i;
    }
    return decimalNum;
}

int main() {
    long long binaryNumber;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    printf("Decimal equivalent: %lld\n", binaryToDecimal(binaryNumber));

    return 0;
}

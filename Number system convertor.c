#include <stdio.h>

void decimalToBinary(int decimalNumber) {
    printf("Binary: ");
    while (decimalNumber > 0) {
        printf("%d", decimalNumber % 2);
        decimalNumber /= 2;
    }
    printf("\n");
}

void decimalToOctal(int decimalNumber) {
    printf("Octal: %o\n", decimalNumber);
}

void decimalToHexadecimal(int decimalNumber) {
    printf("Hexadecimal: %X\n", decimalNumber);
}

int main() {
    int decimalNumber;
    
    // Input
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Output conversions
    decimalToBinary(decimalNumber);
    decimalToOctal(decimalNumber);
    decimalToHexadecimal(decimalNumber);

    return 0;
}


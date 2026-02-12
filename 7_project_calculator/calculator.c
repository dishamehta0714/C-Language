#include <stdio.h>

int main() {

    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Addition
    switch(1) {
        case 1:
            result = num1 + num2;
            printf("\nAddition = %d", result);
    }

    // Subtraction
    switch(2) {
        case 2:
            result = num1 - num2;
            printf("\nSubtraction = %d", result);
    }

    // Multiplication
    switch(3) {
        case 3:
            result = num1 * num2;
            printf("\nMultiplication = %d", result);
    }

    // Division
    switch(4) {
        case 4:
            result = num1 / num2;
            printf("\nDivision = %d", result);
    }

    // Modulus
    switch(5) {
        case 5:
            result = num1 % num2;
            printf("\nModulus = %d", result);
    }

    return 0;
}

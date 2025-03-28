#include <stdio.h>

int main() {
    // ARITHEMATIC OPERATORS
    // These operators perform basic arithmetic operations on two operands.
    int a = 10, b = 5;

    int sum = a + b;            // Addition (+)
    int difference = a - b;     //  Subtraction (-)
    int product = a * b;        // Multiplication (*)
    int quotient = a / b;       // Division (/)
    int remainder = a % b;      // Modulo (%)
    int increment = a++;        // Increments the value of a by 1
    int decrement = b--;        // Decrements the value of b by 1

    printf("Addition: %d + %d = %d\n", a, b, sum);
    printf("Subtraction: %d - %d = %d\n", a, b, difference);
    printf("Multiplication: %d * %d = %d\n", a, b, product);
    printf("Division: %d / %d = %d\n", a, b, quotient);
    printf("Modulo: %d %% %d = %d\n", a, b, remainder);  // Note that %% is used to print the % symbol
    printf("Increment: a++ = %d\n", a);
    printf("Decrement: b-- = %d\n", b);

    return 0;
}

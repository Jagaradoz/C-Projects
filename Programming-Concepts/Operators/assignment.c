#include <stdio.h>

int main() {
    // ASSIGNMENT OPERATORS
    // Performs arithmetic operations on variables and assign the result back to the variable
    int a = 10, b = 5;

    a = b;             // Simple Assignment (=)
    int c = a += b;    // Add and Assign (+=)
    int d = a -= b;    // Subtract and Assign (-=)
    int e = a *= b;    // Multiply and Assign (*=)
    int f = a /= b;    // Divide and Assign (/=)
    int g = a %= b;    // Modulo and Assign (%=)

    printf("Simple Assignment: a = b => a = %d\n", a);
    printf("Add and Assign: a += b => c = %d\n", c);
    printf("Subtract and Assign: a -= b => d = %d\n", d);
    printf("Multiply and Assign: a *= b => e = %d\n", e);
    printf("Divide and Assign: a /= b => f = %d\n", f);
    printf("Modulo and Assign: a %%= b => g = %d\n", g);

    return 0;
}

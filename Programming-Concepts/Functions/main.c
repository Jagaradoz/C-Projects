#include <stdio.h>

// Function Prototypes
int add(int a, int b);
int subtract(int a, int b);

int main() {
    int num1 = 10, num2 = 5;

    int result1 = add(num1, num2);
    int result2 = subtract(num1, num2);

    printf("Sum: %d + %d = %d\n", num1, num2, result1);
    printf("Sum: %d + %d = %d\n", num1, num2, result1);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
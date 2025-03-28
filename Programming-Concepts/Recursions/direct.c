#include <stdio.h>

int factorial(int n);

int main() {
    int number = 5;
    int result = factorial(number);
    
    printf("Factorial of %d is %d\n", number, result);
    
    return 0;
}

// Direct Recursion:
// It calls itself with smaller values until it reaches the base case
int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive case
    }
}

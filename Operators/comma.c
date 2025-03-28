#include <stdio.h>

int main() {
    // COMMA OPERATOR
    // Allows multiple expressions to be evaluated in a single statement.

    int a = 10, b = 5;
    
    int c = (1, 2, 3);  // Evaluates 1, 2, and 3, and the result is the rightmost value (3)
    int result = (a++, b++, a + b);  // a is incremented, b is incremented, then a + b is calculated and assigned to result
    
    printf("Comma Operator: (a++, b++, a + b) => result = %d\n", result);
    printf("Values after comma operations: a = %d, b = %d\n", a, b);

    return 0;
}

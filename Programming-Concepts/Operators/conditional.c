#include <stdio.h>

int main() {
    // CONDITIONAL (TERNARY) OPERATOR
    // condition ? value_if_true : value_if_false
    
    int a = 10, b = 5;
    
    int result = (a > b) ? a : b;   // If a is greater than b, result is a, otherwise result is b
    int max = (a > b) ? a : b;      // Another example of using conditional operator

    printf("Ternary Operator: (a > b) ? a : b => result = %d\n", result);
    printf("Max of a and b: (a > b) ? a : b => max = %d\n", max);

    return 0;
}

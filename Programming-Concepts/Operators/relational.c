#include <stdio.h>

int main() {
    // RELATIONAL OPERATORS
    // Performs comparisons between two values and return a boolean result.

    int a = 10, b = 5;

    int is_equal = (a == b);            // Equal to (==)
    int is_not_equal = (a != b);        // Not equal to (!=)
    int is_greater = (a > b);           // Greater than (>)
    int is_less = (a < b);              // Less than (<)
    int is_greater_equal = (a >= b);    // Greater than or equal to (>=)
    int is_less_equal = (a <= b);       // Less than or equal to (<=)

    printf("Equal to: %d == %d = %d\n", a, b, is_equal);
    printf("Not equal to: %d != %d = %d\n", a, b, is_not_equal);
    printf("Greater than: %d > %d = %d\n", a, b, is_greater);
    printf("Less than: %d < %d = %d\n", a, b, is_less);
    printf("Greater than or equal to: %d >= %d = %d\n", a, b, is_greater_equal);
    printf("Less than or equal to: %d <= %d = %d\n", a, b, is_less_equal);

    return 0;
}

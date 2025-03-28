#include <stdio.h>

int main() {
    // LOGICAL OPERATORS
    // Performs logical operations on boolean values.

    int a = 10, b = 5;

    int logical_and = (a > 5) && (b < 10);      // Logical AND (&&)
    int logical_or = (a > 5) || (b > 10);       // Logical OR (||)
    int logical_not_a = !(a > 5);               // Logical NOT (!)

    printf("Logical AND: (%d > 5) && (%d < 10) = %d\n", a, b, logical_and);
    printf("Logical OR: (%d > 5) || (%d > 10) = %d\n", a, b, logical_or);
    printf("Logical NOT: !(%d > 5) = %d\n", a, logical_not_a);

    return 0;
}

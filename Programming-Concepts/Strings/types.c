#include <stdio.h>

int main() {
    // String arrays are arrays of characters. represented by a character array.
    // String literals are immutable sequences of characters. represented by a pointer.
    char str_array[] = "Hello";
    char *str_literal = "Hello";

    str_array[0] = 'J';         // Modifying array is safe.

    *str_literal = 'J';         // Modifying string literal causes undefined behavior.
    str_literal[0] = 'J'        // Modifying string literal causes undefined behavior.
    
    str_literal = "String";     // Modifying the pointer is safe.

    return 0;
}

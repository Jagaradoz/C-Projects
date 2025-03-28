#include <stdio.h>

// "#define" MACRO CONSTANTS  
#define CONSTANT1 1                 // Macro: Replaces CONSTANT1 with 1 at compile time (no memory allocation)
#define NAME1 "John Doe"            // Macro: Replaces NAME1 with "John Doe" at compile time (like a text replacement)

// "const" VARIABLES  
const int CONSTANT2 = 1;            // Constant variable: Stored in memory, but its value cannot be changed  
const char NAME2[] = "John Doe";    // Constant character array: Stored in memory as a string, cannot be modified.

int main() {
    // Using #define macro
    printf("Macro CONSTANT1: %d\n", CONSTANT1);
    printf("Macro NAME1: %s\n", NAME1);

    // Using const variable
    printf("Const CONSTANT2: %d\n", CONSTANT2);
    printf("Const NAME2: %s\n", NAME2);

    // Trying to modify constants (Uncommenting below lines will cause an error)
    // CONSTANT2 = 5;  // Error: Cannot modify a const variable
    // NAME2[0] = 'J'; // Error: Cannot modify a const character array

    return 0;
}

#include <stdio.h>

int main(){
    int x,y;

    // Basic Input/Output:
    int valid_input = scanf("%d%d", &x, &y);             // returns 2 if x , y are valid integers.
    int character_printed = printf("Hello World!\n");    // returns the number of characters printed.
    int ch = getchar();                                  // Reads a single character from stdin.
    int ch = gets();                                     // [DEPRECATED] Reads a line of input into a buffer (unsafe, use fgets instead).
    int result = putchar('\n');                          // Outputs a single character to stdout — here, prints a newline.
    int result = puts("");                               // Outputs a string followed by a newline — here, prints just a newline.

    // Format Specifiers:
    printf("%d", 0);                        // %d: Integer (decimal) format specifier
    printf("%f", 3.14);                     // %f: Floating-point number
    printf("%c", 'A');                      // %c: Single character
    printf("%s", "Hello");                  // %s: String of characters
    printf("%u", 255);                      // %u: Unsigned integer (decimal)
    printf("%x", 255);                      // %x: Unsigned integer (hexadecimal)
    printf("%o", 255);                      // %o: Unsigned integer (octal)
    printf("%p", &main);                    // %p: Pointer address
    printf("%ld", 123456789L);              // %ld: Long integer
    printf("%lf", 3.141592653589793);       // %lf: Double precision floating-point
    printf("%Lf", 3.141592653589793238L);   // %Lf: Long double floating-point
    printf("%e", 3.14);                     // %e: Scientific notation (lowercase 'e')
    printf("%E", 3.14);                     // %E: Scientific notation (uppercase 'E')

    return 0;
}
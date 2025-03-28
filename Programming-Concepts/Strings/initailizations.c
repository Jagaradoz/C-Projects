#include <stdio.h>

int main() {
    char str1[5] = "Hello";             // Unsafe: Not enough space for null terminator
    char str2[6] = "Hello";             // Safe: Enough space for null terminator
    char str3[] = "Hello";              // Safe: Compiler automatically allocates enough space
    char *str4[] = {"Hello", "World"};  // Safe: Pointer to array of strings

    return 0;
}

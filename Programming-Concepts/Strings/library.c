#include <stdio.h>
#include <string.h>

int main() {
    int length, result;
    
    char str1[] = "Hello";
    char str2[10];

    // strcpy()     Copies the string from src to dest.
    // strncpy()    Copies the string from src to dest (up to the specified length).
    // strcat()     Appends the source string to the end of the destination string.
    // strlen()     Returns the length of the string (excluding the null terminator).
    // strcmp()     Compares two strings in alphabetical order.
    strcpy(str2, str1);  
    strncpy(str2, str1, sizeof(str2) - 1); str2[sizeof(str2) - 1] = '\0';
    strcat(str2, str1);
    length = strlen(str1);
    result = strcmp(str1, str2);

    return 0;
}

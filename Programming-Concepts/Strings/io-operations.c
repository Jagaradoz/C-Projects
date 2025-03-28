#include <stdio.h>

int main() {
    int amount;

    char ch;
    char str1[100], str2[100], str3[100];

    // getchar() consumes a character and return it.
    // putchar() prints a character and returns the amount of characters printed.
    ch = getchar();              
    amount = putchar(ch); 

    // gets() reads a line from stdin and stores it in str1.
    // puts() prints a string to stdout.
    gets(str1);
    puts(str1);                  

    // scanf() reads input from stdin and stores it in str2.
    // printf() prints a formatted string to stdout. 
    //      -> %[width].[precision]s
    //      -> %6s : maximum 6 characters.
    //      -> %.5s : 5 characters printed.
    scanf("%6s", str2);
    printf("%6.5s\n", str2);

    return 0;
}

#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("example.txt", "w");

    fputc('A', file);                       // Write a single character to the file
    fputs("\nHello, world!\n", file);       // Write a string to the file
    fprintf(file, "Number: %d\n", 42);      // Write formatted data to the file (like printf)

    fclose(file);

    return 0;
}

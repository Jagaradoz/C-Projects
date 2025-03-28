#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("example.txt", "r");

    char ch = fgetc(file);                  // Read a single character.
    char buffer[100];
    
    fgets(buffer, sizeof(buffer), file);    // Read a line (until newline or EOF).
    fscanf(file, "Number: %d", &ch);        // Read formatted data.
    fseek(file, 0, SEEK_SET);               // Move file pointer to specified position (file pointer, offset, position):
                                            // SEEK_SET = 0
                                            // SEEK_CUR = 1
                                            // SEEK_END = 2

    fclose(file); 
    return 0;
}

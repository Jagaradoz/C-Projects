#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename_old[] = "demo.txt";
    char filename_new[] = "renamed_demo.txt";

    file = fopen(filename_old, "w+");  

    int position = ftell(file);             // Get current position of file pointer.
    rewind(file);                           // Reset file pointer to start.
    rename(filename_old, filename_new);     // Rename the file.
    remove(filename_new);                   // Delete the file.

    return 0;
}

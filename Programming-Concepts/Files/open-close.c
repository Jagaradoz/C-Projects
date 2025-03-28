#include <stdio.h>

int main() {
    FILE *file;

    // FILE* fopen(const char* filename, char* mode) : It opens a file in the specified mode and return the file pointer.
    //      - "w" mode: Write only                         -> Create a new one or overwrite an existing file.
    //      - "a" mode: Append only                        -> Create a new one or append to an existing file.
    //      - "r" mode: Read only                          -> File must exist. otherwise fopen returns NULL
    //      - "r+" mode: Read and write (no truncation)    -> File must exist; allows reading and writing
    //      - "w+" mode: Read and write (truncates file)   -> File is cleared on open; creates if doesn't exist
    //      - "a+" mode: Read and append                   -> File is created if not exists, writing always happens at the end
    //      - "rb" mode: Read binary (binary mode)         -> Opens a binary file in read mode.
    //      - "wb" mode: Write binary (binary mode)        -> Opens a binary file in write mode.
    //      - "ab" mode: Append binary (binary mode)       -> Opens a binary file in append mode.
    
    // int fclose(FILE* pointer) : It closes the file and returns zero if successful, otherwise non-zero.

    file = fopen("file.txt", "w");
    fclose(file);

    return 0;
}

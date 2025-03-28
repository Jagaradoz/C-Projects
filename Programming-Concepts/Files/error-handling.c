#include <stdio.h>
#include <errno.h>     
#include <string.h>   
#include <stdlib.h>

int main() {
    FILE *file;

    file = fopen("nonexistent_file.txt", "r");          // Open a non-existent file in read mode.
    
    if (file == NULL) {
        printf("Error code: %d\n", errno);              // It is automatically set by fopen on failure
        perror("fopen failed");                         // It prints a human-readable error to stderr
        printf("strerror: %s\n", strerror(errno));      // It returns the error message as a string

        exit(EXIT_FAILURE);
    }

    fclose(file);

    return EXIT_SUCCESS;
}

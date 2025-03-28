#include <stdio.h>

// A union:
// It allocates sharable memory for the largest data type.
// The variables inside can be initialized at a time.
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;        // Initialize int i variable.
    data.f = 3.14;      // Overwrite int i variable.

    return 0;
}

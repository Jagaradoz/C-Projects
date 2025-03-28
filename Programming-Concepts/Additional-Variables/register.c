#include <stdio.h>

int main() {
    register int i;  
    // Suggests the compiler to store 'i' in a CPU register (for faster execution time)
    // The compiler may not use a register for 'i' if it's not worth it.
    // The keyword is deprecated in C++17 and removed in C++20.

    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }

    return 0;
}

#include <stdio.h>

static int static_var = 10;  // Can only be used in this file ; "Extern" cannot access it.

void counter();

int main() {
    counter();  // Output: Count: 1
    counter();  // Output: Count: 2
    counter();  // Output: Count: 3
    return 0;
}

void counter() {
    static int count = 0;  // The variable retains its value between function calls. (initialized only once)
    count++;
    printf("Count: %d\n", count);
}

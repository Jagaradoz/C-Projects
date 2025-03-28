#include <stdio.h>

void tail(int n);

int main() {
    tail(3);
    return 0;
}

// Tail Recursive function:
// Instead of create new stack frame, It replaces the old one because there's no task left.
void tail(int n) {
    if (n == 0)
        return;

    printf("%d ", n);
    return tail(n - 1); // Tail call – LAST thing in function
}

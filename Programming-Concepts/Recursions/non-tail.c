#include <stdio.h>

int non_tail(int n);

int main() {
    int result = tail(3);
    return 0;
}

// Non-Tail Recursive function:
// It creates the stack frame everytime when the function is called.
int non_tail(int n) {
    if (n == 0)
        return;

    printf("%d ", n);
    return 1 + tail(n - 1); // Non-Tail call – Not the last thing in function
}

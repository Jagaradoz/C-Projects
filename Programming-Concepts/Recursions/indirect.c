#include <stdio.h>

int n = 1;

void odd();
void even();

int main() {
    odd();
    return 0;
}

// Indirect Recursion:
// They call themselves indirectly through a function that calls them.
void odd() {
    if (n <= 10) {
        printf("%d ", n + 1); 
        n++;
        even(); // Indirect recursive call
    }
    return;
}

void even() {
    if (n <= 10) {
        printf("%d ", n - 1);
        n++;
        odd(); // Indirect recursive call
    }
    return;
}


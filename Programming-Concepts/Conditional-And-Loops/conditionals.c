#include <stdio.h>

int main() {
    int i = 1, j = 1, k = 1;

    // FOR LOOP
    for (i = 1; i <= 5; i++) {
        printf("For Loop: Iteration %d\n", i);
    }

    // WHILE LOOP
    while (j <= 5) {
        printf("While Loop: Iteration %d\n", j);
        j++;
    }

    // DO-WHILE LOOP
    do {
        printf("Do-While Loop: Iteration %d\n", k);
        k++;
    } while (k <= 5);

    return 0;
}

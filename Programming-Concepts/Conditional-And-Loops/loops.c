#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;

    // IF-ELSE STATEMENT
    if (a > b) {
        printf("If-Else: a is greater than b\n");
    } else {
        printf("If-Else: a is not greater than b\n");
    }

    // SWITCH CASE STATEMENT
    switch (c) {
        case 1:
            printf("Switch Case: You selected option 1\n");
            break;
        case 2:
            printf("Switch Case: You selected option 2\n");
            break;
        case 3:
            printf("Switch Case: You selected option 3\n");
            break;
        default:
            printf("Switch Case: Invalid option\n");
    }

    return 0;
}

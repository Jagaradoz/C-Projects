#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // Declarations.
    char binary[100];
    
    int decimal, base, remainder, i;
    bool is_binary;
    char answer;

    do {
        // Initializations.
        decimal = 0;
        base = 1;
        answer = '\0';

        do {
            // User Inputs for binary number.
            printf("Please enter the binary number (0 and 1 only allowed, max: 100): ");
            scanf("%s", binary);
            while(getchar() != '\n');

            is_binary = true;

            // Validate binary number format only.
            for (i = 0; i < strlen(binary); i++) {
                if (binary[i] != '0' && binary[i] != '1') {
                    is_binary = false;
                    printf("Invalid binary number! Try again.\n");
                    break;
                }
            }
        } while (!is_binary);

        // Convert binary to decimal.
        for (i = strlen(binary) - 1; i >= 0; i--) {
            remainder = binary[i] - '0';
            decimal += remainder * base;
            base *= 2;
        }

        // Display the result.
        printf("\nBinary: %s -> Decimal: %d", binary, decimal);

        // Try again method.
        puts("");
        puts("");
        do {
            printf("Do you want to try again? (Y/n): ");
            scanf(" %c", &answer);
            while(getchar() != '\n');
        } while(answer != 'Y' && answer != 'n');

        puts("");

    } while(answer == 'Y');

    return 0;
}

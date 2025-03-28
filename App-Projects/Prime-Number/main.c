#include <stdio.h>
#include <stdbool.h>

int main(){
    // Declarations.
    int start, end, count, i, j;
    bool is_prime;  
    char answer;

    do{
        // Initializations.
        start = 0;
        end = 0;
        count = 0;
        is_prime = true;

        // User Inputs for start and end numbers.
        do {
            printf("Please enter the start number (Least: 0): ");
            scanf("%d", &start);
            while(getchar() != '\n');

            printf("Please enter the end number (Most: 100): ");
            scanf("%d", &end);
            while(getchar() != '\n');

            if(start >= 0 && end <= 100 && start < end) break;
            else puts("The range number is 0 and 100, and start is less than end!");
        } while(1);

        // Print prime numbers within the given range.
        puts("");
        start = (start < 2)  ? 2 : start;
        for (i = start ; i <= end; i++) {

            is_prime = true;

            for (j = 2; j <= i / 2; j++){
                if (i % j == 0) {
                    is_prime = false;
                    break;
                }
            }

            if (is_prime) {
                count++;
                printf("%d, ", i);
            }
        }
        printf("\nTotal prime numbers: %d", count);

        // Try again method.
        puts("");
        puts("");
        do{
            printf("Do you want to try again? (Y/n): ");
            scanf(" %c", &answer);
            while(getchar() != '\n');
        }while(answer != 'Y' && answer != 'n');
        puts("");

    }while(answer == 'Y');

    return 0;
}

#include <stdio.h>


int main() {
    // Declarations.
    int start, end, i;
    char answer;

    do{
        // Initializations.
        start = 0;
        end = 0;
        i = 0;
        answer = '\0';

       do {
            // User Inputs for start and end numbers.
            printf("Please enter the start number (Least: 0): ");
            scanf("%d", &start);
            while(getchar() != '\n');

            printf("Please enter the end number (Most: 50): ");
            scanf("%d", &end);
            while(getchar() != '\n');

            // The randge must be between 0 and 50 and start must be less than end.
            if(start >= 0 && end <= 50 && start < end) break;
            else puts("The range number is 0 and 100, and start is less than end!");
        } while(1);

        // Show the Fibonacci Sequence.
        printf("\nFibonacci Sequence : ");
        for(i = start ; i < end; i++){
        	printf("%d ", fibonacci(i));
        }


        puts("");
        puts("");
        do{
            printf("Do you want to try again? (Y/n): ");
            scanf("%c", &answer);
            while(getchar() != '\n');
        }while(answer != 'Y' && answer != 'n');
        puts("");

    }while(answer == 'Y');

    return 0;
}

int fibonacci(int amount){
	if(amount == 0) return 0;
	if(amount == 1) return 1;
	
	return fibonacci(amount - 1) + fibonacci(amount - 2);
}

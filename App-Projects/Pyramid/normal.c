#include <stdio.h>

int main() {
    // Declarations.
    int row, i, j;
    char answer;

    do{
        // Initializations.
        row = 0;
        i = 0;
        j = 0;
        answer = '\0';

        do{
            // User input for pyramid row size.
            printf("Pyramid Row: ");
            scanf("%d",&row);
            while(getchar() != '\n');
        }while(row <= 0);

        // Print pyramid pattern.
        for(i = 1 ; i <= row; i++){
            for(j = 1; j <= (row - i);j++){
                printf(" ");
            }

            for(j = 1; j <= (i * 2 - 1); j++){
                printf("*");
            }

            printf("\n");

            // for(j = 1; j <= 2 * row - 1;j++){
            //     if(j <= row - (i-1) && j >= row + (i-1)){
            //         printf("*");
            //     }else{
            //         printf(" ");
            //     }
            // }
        }

        // Try again method.
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

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>

// Prtotype Declarations.
void select_game_mode(int *player);
void print_board(char (*board_ptr)[3]);
void try_again(char *answer);
void place_move(int player, int *turn, char (*board_ptr)[3]);
bool check_winner(char (*board_ptr)[3]);
bool is_board_full(char (*board_ptr)[3]);

int main() {
    // Declarations.
    int player, turn, i, j;
    char answer;
    bool win;

    char board[3][3];

    char (*board_ptr)[3];

    // Seed random number.
    srand(time(0));

    do {
        // Initializations.
        player = -1;
        turn = 0;
        win = false;

        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                board[i][j] = ' ';

        board_ptr = board;

        // Select the game mode.
        // 1 for one player mode.
        // 2 for two player mode.
        select_game_mode(&player);

        // Actual game loop.
        do {
            // Print the current board.
            print_board(board);
            place_move(player, &turn, board_ptr);
            win = check_winner(board_ptr);

            // Check for a winner.
            if (win) {
                print_board(board);
                printf("\nPlayer %c wins!\n", turn == 1 ? 'X' : 'O');
                break;
            }

            // Check for a draw.
            if (is_board_full(board_ptr)) {
                print_board(board);
                printf("\nIt's a draw!\n");
                break;
            }

        } while (1);

        // Try again method.
        try_again(&answer);
    } while (answer == 'Y');

    return 0;
}

void select_game_mode(int *player) {
    printf("Tic Tac Toe Game!\n");
    printf("1 : One player.\n");
    printf("2 : Two players.\n");
    printf("Select the game mode: ");
    scanf("%d", player);
}

void try_again(char *answer) {
    puts("");
    do {
        printf("Do you want to try again? (Y/n): ");
        scanf(" %c", answer);
        while (getchar() != '\n');
    } while (*answer != 'Y' && *answer != 'n');
}

void print_board(char (*board_ptr)[3]) {
	int i, j;
    puts("");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", board_ptr[i][j]);
            if (j != 2) printf("|");
        }
        if (i != 2) printf("\n---|---|---\n");
    }
    puts("\n");
}

void place_move(int player, int *turn, char (*board_ptr)[3]) {
    // Declarations and Initializations.
    int move;
    char mark = (*turn == 0) ? 'X' : 'O';
    
    char *move_ptr = &board_ptr[0][0];

    // If 1 player mode, the computer makes a random move.
    // If 2 player mode, the 2 players make their move.
    if (player == 1 && *turn == 1) {
        do {
            move = rand() % 9 + 1;
        } while (move_ptr[move - 1] != ' ');

        printf("Computer Moved!\n");
    } else {
        do {
            printf("Player %c, enter your move (1-9): ", mark);
            scanf("%d", &move);
        } while (move < 1 || move > 9 || move_ptr[move - 1] != ' ');
    }

    // Assign the move to the board.
    move_ptr[move - 1] = mark;
    *turn = 1 - *turn;
}

bool check_winner(char (*board_ptr)[3]) {
    int i;

    // Check rows for the winner.
    for (i = 0; i < 3; i++) {
        if (board_ptr[i][0] != ' ' &&
            board_ptr[i][0] == board_ptr[i][1] &&
            board_ptr[i][1] == board_ptr[i][2]) {
            return true;
        }
    }

    // Check columns for the winner.
    for (i = 0; i < 3; i++) {
        if (board_ptr[0][i] != ' ' &&
            board_ptr[0][i] == board_ptr[1][i] &&
            board_ptr[1][i] == board_ptr[2][i]) {
            return true;
        }
    }

    // Check diagonals for the winner.
    if (board_ptr[0][0] != ' ' &&
        board_ptr[0][0] == board_ptr[1][1] &&
        board_ptr[1][1] == board_ptr[2][2]) {
            return true;
        }
        
    // Check diagonals for the winner.
    if (board_ptr[0][2] != ' ' &&
        board_ptr[0][2] == board_ptr[1][1] &&
        board_ptr[1][1] == board_ptr[2][0]) {
        return true;
    }

    return false;
}

bool is_board_full(char (*board_ptr)[3]) {
	int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (board_ptr[i][j] == ' ')
                return false;
    return true;
}

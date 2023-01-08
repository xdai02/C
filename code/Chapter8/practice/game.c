#include <stdio.h>
#include <string.h>
#include "tic_tac_toe.h"

int main() {
    char board[ROW][COL];

    init_board(board);
    print_board(board);

    while (winner(board) == IN_PROGRESS) {
        if (get_current_player() == PLAYER) {
            int pos;
            printf("Your turn. Enter a position: ");
            scanf("%d", &pos);
            if (!place(board, pos)) {
                fprintf(stderr, "Invalid position.\n");
                continue;
            }
        } else {
            printf("Computer's turn.\n");
            computer_action(board);
        }

        print_board(board);
        switch_player();
    }

    FILE *fp = fopen("game.txt", "a+");
    int round = 0;
    char buf[32];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        round++;
    }
    round++;

    switch (winner(board)) {
    case PLAYER:
        printf("Player wins!\n");
        fprintf(fp, "Round %d: Win\n", round);
        break;
    case COMPUTER:
        printf("Computer wins!\n");
        fprintf(fp, "Round %d: Lost\n", round);
        break;
    case DRAW:
        printf("Draw!\n");
        fprintf(fp, "Round %d: Draw\n", round);
        break;
    }

    return 0;
}
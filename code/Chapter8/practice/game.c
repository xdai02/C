#include <stdio.h>
#include <string.h>
#include "tic_tac_toe.h"

int main() {
    init_board();
    print_board();

    while (winner() == IN_PROGRESS) {
        if (get_current_player() == PLAYER) {
            int pos;
            printf("Your turn. Enter a position: ");
            scanf("%d", &pos);
            if (!place(pos)) {
                fprintf(stderr, "Invalid position.\n");
                continue;
            }
        } else {
            printf("Computer's turn.\n");
            computer_action();
        }

        print_board();
        switch_player();
    }

    FILE *fp = fopen("game.txt", "a+");
    int round = 0;
    char buf[32];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        round++;
    }
    round++;

    switch (winner()) {
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
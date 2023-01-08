#include "tic_tac_toe.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool is_player_turn = true;

void init_board(char board[ROW][COL]) {
    srand(time(NULL));

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            board[i][j] = '0' + i * COL + j + 1;
        }
    }
}

void print_board(char board[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf(" %c ", board[i][j]);
            if (j < COL - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < ROW - 1) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

bool is_board_full(char board[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (board[i][j] != CROSS && board[i][j] != NOUGHT) {
                return false;
            }
        }
    }
    return true;
}

bool place(char board[ROW][COL], int pos) {
    if (pos < 1 || pos > 9) {
        return false;
    }

    int row = (pos - 1) / COL;
    int col = (pos - 1) % COL;

    if (board[row][col] == CROSS || board[row][col] == NOUGHT) {
        return false;
    }

    if (is_player_turn) {
        board[row][col] = CROSS;
    } else {
        board[row][col] = NOUGHT;
    }
    return true;
}

int winner(char board[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            if (board[i][0] == CROSS) {
                return PLAYER;
            } else {
                return COMPUTER;
            }
        }
    }

    for (int i = 0; i < COL; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            if (board[0][i] == CROSS) {
                return PLAYER;
            } else {
                return COMPUTER;
            }
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == CROSS) {
            return PLAYER;
        } else {
            return COMPUTER;
        }
    }

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == CROSS) {
            return PLAYER;
        } else {
            return COMPUTER;
        }
    }

    if (is_board_full(board)) {
        return DRAW;
    } else {
        return IN_PROGRESS;
    }
}

int get_current_player() {
    return is_player_turn ? PLAYER : COMPUTER;
}

void switch_player() {
    is_player_turn = !is_player_turn;
}

void computer_action(char board[ROW][COL]) {
    int pos;
    do {
        pos = rand() % 9 + 1;
    } while (!place(board, pos));
}
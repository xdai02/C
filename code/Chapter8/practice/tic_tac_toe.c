#include "tic_tac_toe.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[N][N];

bool is_player_turn = true;

void init_board() {
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = '0' + i * N + j + 1;
        }
    }
}

void print_board() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %c ", board[i][j]);
            if (j < N - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < N - 1) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

bool is_board_full() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] != CROSS && board[i][j] != NOUGHT) {
                return false;
            }
        }
    }
    return true;
}

bool place(int pos) {
    if (pos < 1 || pos > N * N) {
        return false;
    }

    int row = (pos - 1) / N;
    int col = (pos - 1) % N;

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

int winner() {
    bool is_all_same = true;

    for (int i = 0; i < N; i++) {
        is_all_same = true;
        for (int j = 0; j < N - 1; j++) {
            if (board[i][j] != board[i][j + 1]) {
                is_all_same = false;
                break;
            }
        }
        if (is_all_same) {
            if (board[i][0] == CROSS) {
                return PLAYER;
            } else {
                return COMPUTER;
            }
        }
    }

    for (int j = 0; j < N; j++) {
        is_all_same = true;
        for (int i = 0; i < N - 1; i++) {
            if (board[i][j] != board[i + 1][j]) {
                is_all_same = false;
                break;
            }
        }
        if (is_all_same) {
            if (board[0][j] == CROSS) {
                return PLAYER;
            } else {
                return COMPUTER;
            }
        }
    }

    is_all_same = true;
    for (int i = 0; i < N - 1; i++) {
        if (board[i][i] != board[i + 1][i + 1]) {
            is_all_same = false;
            break;
        }
    }
    if (is_all_same) {
        if (board[0][0] == CROSS) {
            return PLAYER;
        } else {
            return COMPUTER;
        }
    }

    is_all_same = true;
    for (int i = 0; i < N - 1; i++) {
        if (board[i][N - 1 - i] != board[i + 1][N - 2 - i]) {
            is_all_same = false;
            break;
        }
    }
    if (is_all_same) {
        if (board[0][N - 1] == CROSS) {
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

void computer_action() {
    int pos;
    do {
        pos = rand() % (N * N) + 1;
    } while (!place(pos));
}
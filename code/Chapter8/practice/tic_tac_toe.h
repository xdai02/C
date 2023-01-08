#ifndef _TIC_TAC_TOE_H_
#define _TIC_TAC_TOE_H_

#include <stdbool.h>

#define ROW 3
#define COL 3

#define CROSS 'X'
#define NOUGHT 'O'

#define PLAYER 1
#define COMPUTER 2
#define IN_PROGRESS 3
#define DRAW 4

void init_board(char board[ROW][COL]);

void print_board(char board[ROW][COL]);

bool is_board_full(char board[ROW][COL]);

bool place(char board[ROW][COL], int pos);

int winner(char board[ROW][COL]);

int get_current_player();

void switch_player();

void computer_action(char board[ROW][COL]);

#endif
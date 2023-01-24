#ifndef _TIC_TAC_TOE_H_
#define _TIC_TAC_TOE_H_

#include <stdbool.h>

#define N 3

#define CROSS 'X'
#define NOUGHT 'O'

#define PLAYER 1
#define COMPUTER 2
#define IN_PROGRESS 3
#define DRAW 4

void init_board();

void print_board();

bool is_board_full();

bool place(int pos);

int winner();

int get_current_player();

void switch_player();

void computer_action();

#endif
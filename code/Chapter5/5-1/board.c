#include <stdio.h>

void print_board(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col - 1; j++) {
            printf("   |");
        }
        printf("\n");

        if (i < row - 1) {
            printf("---+---+---\n");
        }
    }
}

int main() {
    print_board(3, 3);
    return 0;
}
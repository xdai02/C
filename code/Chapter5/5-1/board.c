#include <stdio.h>

void print_board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("   |");
        }
        printf("\n");

        if (i < 2) {
            printf("---+---+---\n");
        }
    }
}

int main() {
    print_board();
    return 0;
}
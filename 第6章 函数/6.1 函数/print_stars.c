#include <stdio.h>

void printStars(int row, int col, char c) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    printStars(5, 10, '?');
    return 0;
}
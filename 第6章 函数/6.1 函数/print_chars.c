#include <stdio.h>

void printChars(int row, int col, char c) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    printChars(5, 10, '?');
    return 0;
}
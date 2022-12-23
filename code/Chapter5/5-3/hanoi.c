#include <stdio.h>

int move = 0;

void hanoi(int n, char src, char mid, char dst) {
    if (n == 1) {
        printf("%c -> %c\n", src, dst);
        move++;
    } else {
        // move top n-1 disks from src to mid
        hanoi(n - 1, src, dst, mid);
        printf("%c -> %c\n", src, dst);
        move++;
        // move top n-1 disks from mid to dst
        hanoi(n - 1, mid, src, dst);
    }
}

int main() {
    hanoi(3, 'A', 'B', 'C');
    printf("Moves: %d\n", move);
    return 0;
}
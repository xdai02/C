#include <stdio.h>

int sum(int start, int end) {
    int total = 0;
    for(int i = start; i <= end; i++) {
        total += i;
    }
    return total;
}

int main() {
    printf("1-100的累加和 = %d\n", sum(1, 100));
    printf("1024-2048的累加和 = %d\n", sum(1024, 2048));
    return 0;
}
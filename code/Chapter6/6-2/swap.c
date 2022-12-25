#include <stdio.h>

#define SWAP(a, b) {int t; t = a; a = b; b = t;}

int main() {
    int a = 1;
    int b = 2;

    printf("Before: a = %d, b = %d\n", a, b);
    SWAP(a, b);
    printf("After: a = %d, b = %d\n", a, b);

    return 0;
}
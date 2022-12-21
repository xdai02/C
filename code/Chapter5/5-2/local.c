#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("swap(): a = %d, b = %d\n", a, b);
}

int main() {
    int a = 1;
    int b = 2;

    printf("Before: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After: a = %d, b = %d\n", a, b);

    return 0;
}
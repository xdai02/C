#include <stdio.h>

int a, b;

void swap() {
    int temp = a;
    a = b;
    b = temp;
    printf("swap(): a = %d, b = %d\n", a, b);
}

int main() {
    a = 1;
    b = 2;

    printf("Before: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After: a = %d, b = %d\n", a, b);

    return 0;
}
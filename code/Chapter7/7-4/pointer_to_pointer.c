#include <stdio.h>

int main() {
    int data = 5;
    int *p = &data;
    int **q = &p;

    printf("data = %d\n", data);
    printf("*p = %d\n", *p);
    printf("**q = %d\n", **q);

    printf("Address of data = %p\n", &data);
    printf("Address of p = %p\n", &p);
    printf("Address of q = %p\n", &q);

    printf("Value of p = %p\n", p);
    printf("Value of q = %p\n", q);

    return 0;
}
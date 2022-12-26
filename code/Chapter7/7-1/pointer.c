#include <stdio.h>

int main() {
    int data = 3;
    int *p = &data;

    printf("Value of data: %d\n", data);
    printf("Address of data: %p\n", &data);
    
    printf("Value of p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Value of data pointed by p: %d\n", *p);
    
    *p = 5;

    printf("Value of data: %d\n", data);
    printf("Value of data pointed by p: %d\n", *p);

    return 0;
}
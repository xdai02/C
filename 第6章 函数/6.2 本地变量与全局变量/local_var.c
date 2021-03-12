#include <stdio.h>

int main() {
    int a = 1;
    printf("a = %d\n", a);
    {
        int a = 2;
        printf("a = %d\n", a);
    }
    printf("a = %d\n", a);
    return 0;
}
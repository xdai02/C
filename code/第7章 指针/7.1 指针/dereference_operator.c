#include <stdio.h>

int main() {
    int a = 1;
    int *p = &a;

    printf("指针p所指向的地址上的值：%d\n", *p);
    *p = 2;
    printf("指针p所指向的地址上的值：%d\n", *p);
    return 0;
}
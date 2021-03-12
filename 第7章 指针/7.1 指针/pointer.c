#include <stdio.h>

int main() {
    int a;
    int *p = &a;

    printf("变量a的地址：%p\n", &a);
    printf("指针p保存的值：%p\n", p);
    printf("指针p的地址：%p\n", &p);
    return 0;
}
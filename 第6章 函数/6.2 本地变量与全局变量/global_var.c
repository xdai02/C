#include <stdio.h>

int a = 1;      // 全局变量

int main() {
    int a = 2;  // 本地变量
    printf("a = %d\n", a);
    return 0;
}
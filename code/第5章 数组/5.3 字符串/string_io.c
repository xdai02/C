#include <stdio.h>

int main() {
    char str[32];
    printf("输入字符串：");
    gets(str);
    printf("%s\n", str);
    return 0;
}
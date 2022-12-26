#include <stdio.h>

int main() {
    char str[] = "hello";
    char *s = str;
    char *t = s;

    s[0] = 'H';

    printf("指针s指向的字符串：%s\n", s);
    printf("指针t指向的字符串：%s\n", t);
    printf("指针s的地址：%p\n", &s);
    printf("指针t的地址：%p\n", &t);
    return 0;
}
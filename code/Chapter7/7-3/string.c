#include <stdio.h>

int main() {
    char str[] = "hello";
    char *s = str;
    char *t = s;

    s[0] = 'H';
    printf("s = %s\n", s);
    printf("t = %s\n", t);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char s1[32] = "hello world";
    char s2[32] = "program";

    strcpy(s1, s2);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    return 0;
}
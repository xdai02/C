#include <stdio.h>
#include "mystring.h"

int main() {
    char s1[16] = "Hello";
    char s2[16] = "World!";
    char *result = NULL;

    int s1_len = mystrlen(s1);
    printf("mystrlen(\"%s\") = %d\n", s1, s1_len);

    result = mystrcpy(s1, s2);
    printf("mystrcpy(\"%s\", \"%s\") = %s\n", s1, s2, result);

    result = mystrcat(s1, s2);
    printf("mystrcat(\"%s\", \"%s\") = %s\n", s1, s2, result);

    printf("mystrcmp(\"%s\", \"%s\") = %d\n", s1, s2, mystrcmp(s1, s2));

    return 0;
}
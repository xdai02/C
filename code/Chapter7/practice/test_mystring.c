#include <stdio.h>
#include "mystring.h"

int main() {
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("mystrlen(\"%s\") = %d\n", s1, mystrlen(s1));

    printf("mystrcpy(\"%s\", \"%s\") = %s\n", s1, s2, mystrcpy(s1, s2));

    printf("mystrcat(\"%s\", \"%s\") = %s\n", s1, s2, mystrcat(s1, s2));

    printf("mystrcmp(\"%s\", \"%s\") = %d\n", s1, s2, mystrcmp(s1, s2));

    return 0;
}
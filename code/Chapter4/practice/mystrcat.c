#include <stdio.h>

int main() {
    char s1[32] = {0};
    char s2[32] = {0};
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);

    int i = 0;
    while (s1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (s2[j] != '\0') {
        s1[i++] = s2[j++];
    }

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    return 0;
}
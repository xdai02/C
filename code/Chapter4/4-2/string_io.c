#include <stdio.h>

int main() {
    char str1[32];
    printf("Enter string 1: ");
    gets(str1);
    puts(str1);

    char str2[32];
    printf("Enter string 2: ");
    scanf("%s", str2);
    printf("%s\n", str2);

    return 0;
}
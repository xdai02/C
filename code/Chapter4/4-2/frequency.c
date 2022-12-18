#include <stdio.h>

int main() {
    char str[32];
    printf("Enter a string: ");
    gets(str);
    printf("Character to search: ");
    char c = getchar();

    int cnt = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            cnt++;
        }
        i++;
    }

    printf("\'%c\' appears %d times in \"%s\".\n", c, cnt, str);
    return 0;
}
#include <stdio.h>

int main() {
    char str[32] = {0};
    printf("Enter a string: ");
    gets(str);

    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    printf("Length: %d\n", i);

    return 0;
}
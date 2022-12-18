#include <stdio.h>
#include <string.h>

int main() {
    char s1[32] = "communication";
    char s2[32] = "compare";
    printf("%d\n", strcmp(s1, s2));
    return 0;
}
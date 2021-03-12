#include <stdio.h>

int main() {
    char str[4][12] = {"C++", "Java", "Python", "JavaScript"};
    for(int i = 0; i < 4; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}
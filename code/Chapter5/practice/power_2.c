#include <stdio.h>

int power_2(int x) {
    if (x == 0) {
        return 1;
    }
    return 2 * power_2(x - 1);
}

int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    printf("%d\n", power_2(x));
    return 0;
}
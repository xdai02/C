#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return n;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
    int n = 7;
    printf("%d\n", fibonacci(n));
    return 0;
}
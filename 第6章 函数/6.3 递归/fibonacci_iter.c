#include <stdio.h>

int fibonacci(int n) {
    int f[n];
    f[0] = f[1] = 1;
    for(int i = 2; i < n; i++) {
        f[i] = f[i-2] + f[i-1];
    }
    return f[n-1];
}

int main() {
    int n = 7;
    printf("斐波那契数列第%d位：%d\n", n, fibonacci(n));
    return 0;
}
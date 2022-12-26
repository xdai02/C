#include <stdio.h>

#define RECURSION

#ifdef RECURSION
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
#else
int fibonacci(int n) {
    int seq[n];
    seq[0] = 0;
    seq[1] = 1;

    for (int i = 2; i <= n; i++) {
        seq[i] = seq[i - 1] + seq[i - 2];
    }

    return seq[n];
}
#endif

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}
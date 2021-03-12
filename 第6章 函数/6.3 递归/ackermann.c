#include <stdio.h>

/**
 * Ackermann's Function 
 *           ①        n + 1             m = 0
 * A(m, n) = ②      A(m-1, 1)           m > 0, n = 0
 *           ③  A(m-1, A(m, n-1))       m > 0, n > 0
 */
int A(int m, int n) {
    if(m == 0) {
        return n + 1;
    } else if(m > 0 && n == 0) {
        return A(m-1, 1);
    } else if(m > 0 && n > 0) {
        return A(m-1, A(m, n-1));
    }
}

int main() {
    printf("%d\n", A(3, 4));
    return 0;
}
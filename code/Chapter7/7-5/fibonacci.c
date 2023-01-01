#include <stdio.h>
#include <stdlib.h>

int *generate_fibonacci(int n) {
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        return NULL;
    }

    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr;
}

int main() {
    int n = 10;
    int *arr = generate_fibonacci(n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
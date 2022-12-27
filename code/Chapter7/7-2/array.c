#include <stdio.h>

int main() {
    int arr[] = {4, 1, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;

    printf("Address of arr: %p\n", arr);
    for (int i = 0; i < n; i++) {
        printf("Address of arr[%d]: %p\n", i, &arr[i]);
    }

    printf("Value of p: %p\n", p);
    for (int i = 1; i < n; i++) {
        printf("Value of p + %d: %p\n", i, p + i);
    }

    *p = 9;
    *(p + 1) = 8;
    *(p + 2) = 7;
    *(p + 3) = 6;

    for (int i = 0; i < n; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    return 0;
}
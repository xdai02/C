#include <stdio.h>

int main() {
    int arr[] = {44, 12, 64, 78, 16, 72, 13, 98, 84};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;

    while(p < arr + n) {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    return 0;
}
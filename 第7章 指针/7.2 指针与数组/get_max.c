#include <stdio.h>

int getMax(int *arr, int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {76, 23, 12, 98, 5, 61, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = getMax(arr, n);
    printf("max = %d\n" , max);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int *merge(int *arr1, int len1, int *arr2, int len2) {
    int *arr = (int *)malloc(sizeof(int) * (len1 + len2));
    if (!arr) {
        return NULL;
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    while (i < len1) {
        arr[k++] = arr1[i++];
    }
    while (j < len2) {
        arr[k++] = arr2[j++];
    }

    return arr;
}

int main() {
    int arr1[] = {3, 5, 6, 8};
    int len1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {1, 2, 4, 7, 9, 10};
    int len2 = sizeof(arr2) / sizeof(int);

    int *merged_arr = merge(arr1, len1, arr2, len2);
    for (int i = 0; i < len1 + len2; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    free(merged_arr);
    return 0;
}
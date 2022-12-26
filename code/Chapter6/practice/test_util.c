#include <stdio.h>
#include "util.h"

int main() {
    double arr[] = {3.1, 2.8, 1.3, 4.7, 5.6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Test data: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    
    printf("Max = %.2f\n", max(arr, n));
    printf("Min = %.2f\n", min(arr, n));
    printf("Sum = %.2f\n", sum(arr, n));
    printf("Average = %.2f\n", average(arr, n));

    printf("0.1 + 0.2 == 0.3? %s\n", 0.1 + 0.2 == 0.3 ? "true" : "false");
    printf("double_equal(0.1 + 0.2, 0.3)? %s\n", double_equal(0.1 + 0.2, 0.3) ? "true" : "false");

    return 0;
}
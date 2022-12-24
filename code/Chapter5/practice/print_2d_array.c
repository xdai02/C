#include <stdio.h>

void print_2d_array(int arr[], int n, int row, int col) {
    if (n != row * col) {
        return;
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i * col + j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int row, col;
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter column: ");
    scanf("%d", &col);

    print_2d_array(arr, n, row, col);

    return 0;
}
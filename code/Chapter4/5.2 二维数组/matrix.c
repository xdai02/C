#include <stdio.h>

int main() {
    int A[3][2] = {
        {1, 3},
        {1, 0},
        {1, 2}
    };
    int B[3][2] = {
        {0, 0},
        {7, 5},
        {2, 1}
    };
    int C[3][2];

    printf("矩阵加法\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%3d", C[i][j]);
        }
        printf("\n");
    }

    printf("矩阵减法\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] - B[i][j];
            printf("%3d", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
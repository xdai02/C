#include <stdio.h>
#include <stdlib.h>

int **transpose(int **matrix, int row, int col) {
    int **tranpose_matrix = (int **)malloc(sizeof(int *) * col);
    if (!tranpose_matrix) {
        return NULL;
    }

    for (int i = 0; i < col; i++) {
        tranpose_matrix[i] = (int *)malloc(sizeof(int) * row);
        if (!tranpose_matrix[i]) {
            for (int j = 0; j < i; j++) {
                free(tranpose_matrix[j]);
            }
            free(tranpose_matrix);
        }
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            tranpose_matrix[i][j] = matrix[j][i];
        }
    }
    return tranpose_matrix;
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };
    int row = sizeof(matrix) / sizeof(matrix[0]);
    int col = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int *p_matrix[] = {matrix[0], matrix[1]};
    int **tranpose_matrix = transpose(p_matrix, row, col);

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", tranpose_matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < col; i++) {
        free(tranpose_matrix[i]);
    }
    free(tranpose_matrix);

    return 0;
}
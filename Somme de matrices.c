#include <stdio.h>


#define ROWS 3
#define COLS 3


void matrix_sum(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]) {

    for (int i = 0; i < ROWS; i++) {

        for (int j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}


void print_matrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int matrixA[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrixB[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int matrixC[ROWS][COLS];

    printf("Matrix A:\n");
    print_matrix(matrixA);

    printf("\nMatrix B:\n");
    print_matrix(matrixB);

    matrix_sum(matrixA, matrixB, matrixC);

    printf("\nMatrix Sum (A + B):\n");
    print_matrix(matrixC);

    return 0;
}

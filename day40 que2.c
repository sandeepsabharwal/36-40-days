# Multiply two matrices

#include <stdio.h>

int main() {
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    int result[2][2];
    int rowsA = 2, colsA = 3, rowsB = 3, colsB = 2;

    for(int i = 0; i < rowsA; i++) {
        for(int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for(int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for(int i = 0; i < rowsA; i++) {
        for(int j = 0; j < colsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

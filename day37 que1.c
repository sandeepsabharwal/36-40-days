# Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rowSum[3];

    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    for(int i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}

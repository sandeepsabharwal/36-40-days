# Add two matrices.

#include <stdio.h>

int main() {
    int rows = 2, cols = 3;
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int B[2][3] = {
        {6, 5, 4},
        {3, 2, 1}
    };
    int sum[2][3];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

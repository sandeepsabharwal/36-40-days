#  find the sum of all elements in a matrix:

#include <stdio.h>

int main() {
    int rows = 2, cols = 3;
    int matrix[10][10] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int sum = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);
    return 0;
}

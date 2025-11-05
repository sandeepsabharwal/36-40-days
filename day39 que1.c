# Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int n = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int diag[3], count = 0;

    for(int i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                count++;
                break;
            }
        }
    }

    if(count == 0)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}

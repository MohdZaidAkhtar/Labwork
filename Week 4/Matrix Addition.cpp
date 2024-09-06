#include <stdio.h>

int main() {
    // Define the dimensions of the matrices
    int rows = 2, cols = 3;

    // Define two matrices and a result matrix
    int matrix1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrix2[2][3] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int result[2][3];

    // Add the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result matrix
    printf("Sum of the two matrices is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


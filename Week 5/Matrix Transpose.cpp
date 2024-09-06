#include <stdio.h>

int main() {
    // Define the matrix dimensions
    int rows = 3, cols = 2;

    // Define the original matrix
    int matrix[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // Define the transpose matrix with swapped dimensions
    int transpose[2][3];

    // Compute the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the transpose matrix
    printf("Transpose matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}


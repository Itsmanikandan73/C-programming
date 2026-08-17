#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t rows = 3;
    size_t cols = 3;

    // Allocate array of rows pointers
    int **matrix = malloc(rows * sizeof(int *));
    if (matrix == NULL) return EXIT_FAILURE;

    // Allocate columns for each row 
    for (size_t r = 0; r < rows; r++) {
        matrix[r] = malloc(cols * sizeof(int));
        if (matrix[r] == NULL) return EXIT_FAILURE;
    }

    // Fill and print matrix
    printf("--- Dynamic 2D Array Output ---\n");
    for (size_t r = 0; r < rows; r++) {
        for (size_t c = 0; c < cols; c++) {
            matrix[r][c] = (int) (r + 1) * (int) (c + 1);
            printf("%d\t", matrix[r][c]);
        }
        printf("\n");
    }

    // Deallocating heap memory in reverse order
    for (size_t r = 0; r < rows; r++) {
        free(matrix[r]);
    }
    free(matrix);
    matrix = NULL;

    return EXIT_SUCCESS;
}
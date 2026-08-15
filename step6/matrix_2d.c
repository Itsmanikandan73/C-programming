#include <stdio.h>

#define ROWS 3
#define COLS 3

int main(void) {
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("--- 3x3 Matrix Output ---\n");
    for (size_t r = 0; r < ROWS; r++) {
        for (size_t c = 0; c < COLS; c++) {
            printf("%d\t", matrix[r][c]);
        }
        printf("\n");
    }
    return 0;
}
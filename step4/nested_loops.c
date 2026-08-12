#include <stdio.h>

int main(void) {
    int rows = 3;
    int cols = 4;

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            printf("[%d,%d],", r,c);
        }
        printf("\n");      // Move to next line after each row.
    }

    return 0;
}
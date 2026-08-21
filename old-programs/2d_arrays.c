#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 4 rows, 3 columns
    char numpads[4][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'},{'*','0','#'}};

    size_t rows = sizeof(numpads) / sizeof(numpads[0]);
    size_t cols = sizeof(numpads[0]) / sizeof(numpads[0][0]);

    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < cols; y++) {
            printf("%c  ", numpads[x][y]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
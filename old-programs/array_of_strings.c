#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    char fruits[4][10] = {"apple","banana","coconut","pineapple"};

    size_t rows = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'A';
    fruits[1][0] = 'B';
    fruits[2][0] = 'C';
    fruits[3][0] = 'p';

    for (int i = 0; i < rows; i++) {
        fprintf(stdout,"%s\n", fruits[i]);
    }

    return EXIT_SUCCESS;
}

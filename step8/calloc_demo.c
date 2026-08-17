#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t count = 4;

    // calloc takes (number of elements , size of elements)
    int *zeros = calloc(count, sizeof(int));

    if (zeros == NULL) {
        fprintf(stderr, "Error: memory allocation failed.\n");
        return EXIT_FAILURE;
    }

    if (zeros != NULL) {
        fprintf(stdout, "The calloc allocation setup succcessfully.\n");
    }

    printf("\n--- Output from calloc (Guaranteed Zeros) ---\n");
    for (size_t i = 0; i < count; i++) {
        printf("zeros[%zu] = %d\n", i , zeros[i]);
    }

    free(zeros);
    zeros = NULL;

    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t count = 5;

    // Allocating memory for 5 integers
    float *arr = malloc(count * sizeof(float));

    // Always verify allocation succeeded
    if (arr == NULL) {
        fprintf(stderr, "Error: Heap allocation failed\n");
        return EXIT_FAILURE;
    }

    if (arr != NULL) {
        fprintf(stdout, "malloc function allocated successfully\n\n");
    }

    // Initialize and print values
    for (size_t i = 0; i < count; i++) {
        arr[i] = (float) (i + 1) * 10;
        printf("arr[%zu] = %.1f\n", i, arr[i]);
    }

    // Free allocated memory and clear dangling pointer
    free(arr);
    arr = NULL;

    return EXIT_SUCCESS;
}
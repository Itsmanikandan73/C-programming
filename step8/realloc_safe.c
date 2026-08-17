#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t Initial_size = 3; 
    int *data = malloc(Initial_size * sizeof(int));

    if (data == NULL) return EXIT_FAILURE;
    if (data != NULL) printf("malloc initilazation setup successfully\n");

    for (size_t i = 0; i < Initial_size; i++) {
        data[i] = (int) (i + 1);
    }

    printf("Original buffer (size %zu): %d, %d, %d\n", Initial_size, data[0], data[1],data[2]);

    // Safe realloc pattern
    size_t new_size = 6;
    int *temp = realloc(data, new_size * sizeof(int));

    if (temp == NULL) {
        fprintf(stderr, "ERROR: Reallocating failed! Preserving original buffer.\n");
        free(data); // Free original memory befor exiting
        return EXIT_FAILURE;
    }

    // Reassingment after verified success
    data = temp;
    temp = NULL;

    // Populate newly allocated extra space 
    for (size_t i = Initial_size; i < new_size; i++) {
        data[i] = (int) (i + 1) * 10;
    }

    printf("Expanded buffer (size %zu): ", new_size);

    for (size_t i = 0; i < new_size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    free(data);
    data = NULL;

    return EXIT_SUCCESS;
}
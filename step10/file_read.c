#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "output.txt";
    char buffer[256];

    // Open file for reading 
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    printf("--- Reading Contents of '%s' ---\n", filename);

    // Stream file contents line by line 
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // close file handle
    fclose(file);
    file = NULL;

    return EXIT_SUCCESS;
}
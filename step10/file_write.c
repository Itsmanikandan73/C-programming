#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "output.txt";

    // Open file for writing (creates new file or truncates existing )
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    // Writes data streams into the file
    fprintf(file, "--- System Log Header ---\n");
    fprintf(file, "Status: OK\n");
    fprintf(file, "Process PID: %d\n", 1337);

    // close the open file stream 
    fclose(file);
    file = NULL;

    printf("Data written successfully to '%s'.\n", filename);
    return EXIT_SUCCESS;
}
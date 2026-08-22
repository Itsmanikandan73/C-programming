#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char names[4][12] = {0};
    size_t rows = sizeof(names) / sizeof(names[0]);

    for (size_t i = 0; i < rows; i++) {
        printf("Enter your names: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) -1] = '\0';  
    }

    for (size_t i = 0; i < rows; i++) {
        fprintf(stdout, "%s\n", names[i]);
    }
    return EXIT_SUCCESS;
}


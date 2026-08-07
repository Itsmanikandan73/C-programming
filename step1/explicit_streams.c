#include <stdio.h>

int main(void) {
    // Regular program output goes to stdout
    fprintf(stdout, "[INFO] Program started successfully\n");

    // Error and diagnostic messages go to stderr
    fprintf(stderr, "[ERROR] This is a simulated error message.\n");

    return 0;
}
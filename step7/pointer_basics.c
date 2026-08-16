#include <stdio.h>

int main(void) {
    int secret = 1337;
    int *ptr = &secret;  // Store memory address of secret

    printf("Value of secret:        %d\n", secret);
    printf("Address of secret:      %p\n", (void *)&secret);
    printf("Value stored in ptr:    %p\n", (void *)ptr);
    printf("Value dereferenced (*): %d\n", *ptr);

    // Modifying the value via pointer dereference
    *ptr = 9003;
    printf("New value of secret:    %d\n", secret);

    return 0;
}
#include <stdio.h>

int global_var = 100;   // Accessible everywhere in this file

int main(void) {
    int outer_var = 10;

    printf("Global var: %d\n", global_var);
    printf("Outer var: %d\n", outer_var);

    {
        // Outer var is shadowed inside this inner block 
        int outer_var = 99;
        int inner_var = 20;

        printf("Inside block - Outer var (shadowed): %d\n", outer_var);
        printf("Inside block - Inner var:            %d\n", inner_var);
    }

    // Inner_var is no longer accssible here
    printf("Outside block - Outer var restored: %d\n", outer_var);

    return 0;
}
#include <stdio.h>

void print_generic(void *data, char type) {
    if (data == NULL) return;

    if (type == 'i'){
        printf("Integer:    %d\n", *(int *) data);
    }
    else if (type == 'f') {
        printf("Float:      %.2f\n", *(float *) data);
    }
}

int main(void) {
    int num = 42;
    float pi = 3.14f;
    int *invalid_ptr = NULL;

    // Defensive check
    if (invalid_ptr == NULL) {
        printf("safetly dected NULL pointer before access!\n");
    }

    // Generic pointer casting 
    print_generic(&num, 'i');
    print_generic(&pi, 'f');

    return 0;
}
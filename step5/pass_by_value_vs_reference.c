#include <stdio.h>

// Modifies only a local copy
void modify_by_value(int num) {
    num = 999;
}

// Modifies the original variable using a pointer
void modify_by_reference(int *num) {
    if (num != NULL) {
        *num = 999;
    }
}

int main(void) {
    int val = 10;

    printf("Original value: %d\n", val);

    modify_by_value(val);
    printf("After modify_by_value: %d\n", val);

    modify_by_reference(&val);
    printf("After modify_by_reference: %d\n", val);

    return 0;
}
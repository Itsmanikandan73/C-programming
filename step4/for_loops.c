#include <stdio.h>

int main(void) {
    printf("--- Counting Up ---\n");

    for (int i = 0; i < 6; i++) {
        printf("i = %d\n", i);
    }

    printf("\n--- Counting down---\n");

    for (int i = 6; i > 0; i--) {
        printf("i = %d\n", i);
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    printf("--- Demostrating continue and break ---\n");

    for (int i = 1; i <= 10; i++) {
        // Skip even numbers
        if (i % 2 == 0){
        continue;
        }

        // Abort loop if we reach 9
        if (i == 9) {
            printf("Break condition met at i = %d\n", i);
            break;
        }

        printf("Processing odd numbers: %d\n", i);
    }
    return 0;
}
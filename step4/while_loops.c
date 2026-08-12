#include <stdio.h>

int main(void) {
    int count = 0;

    // Standard while loop
    printf("--- Standard While Loop ---\n");
    while (count < 4) {
        printf("Iteration: %d\n", count);
        count++;
    }

    // Do-while loop runs at least once regardless of condition
    printf("\n--- Do-While Loop ---\n");
    int val = 10;
    do {
        printf("Executes once even though val (%d) >= 5\n", val);
        val++;
    } while (val < 5);

    return 0;
}
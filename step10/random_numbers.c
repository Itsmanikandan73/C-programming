#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Seed the random number generator using current system time
    srand((unsigned int ) time(NULL));

    printf("--- Generating 5 Random Numbers (1 to 100) ---\n");
    for (int i = 0; i < 5; i++) {
        // Scale rand() output to a range of 1 - 100
        int random_val = (rand() % 100) + 1;
        printf("Random %d: %d\n", i + 1, random_val);
    }
    return EXIT_SUCCESS;
}
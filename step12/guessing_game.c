#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int secret = (rand() % 100) + 1;
    int guess = 0;
    int attempts = 0;

    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between 1 to 100.\n\n");

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Exiting.\n");
            return EXIT_FAILURE;
        }

        attempts++;

        if (guess > secret) {
            printf("Too high! Try again.\n");
        }
        else if (guess < secret) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("\nCongratulations! You guessed %d in %d attempts.\n", secret, attempts);
        }
    } while (guess != secret);
    
    return EXIT_SUCCESS;
}
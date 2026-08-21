#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    // 1 = Rock, 2 = Paper, 3 = Scissors
    char *choices[] = {"", "Rock", "Paper", "Scissors"};
    int player_choice = 0;

    printf("=== Rock, Paper, Scissors ===\n");
    printf("1. Rock\n2. Paper\n3. Scissors\nSelect (1-3): ");

    if (scanf("%d", &player_choice) != 1 || player_choice < 1 || player_choice > 3) {
        printf("Invalid choice\n");
        return EXIT_FAILURE;
    }

    int computer_choice = (rand() % 3 + 1);

    printf("\nYou chose:        %s\n", choices[player_choice]);
    printf("Computer chose:     %s\n", choices[computer_choice]);

    if (player_choice == computer_choice) {
        printf("Result: It's a tie!\n");
    }
    else if ((player_choice == 1 && computer_choice == 3) ||
             (player_choice == 2 && computer_choice == 1) ||
             (player_choice == 3 && computer_choice == 2)) {
                printf("Result: You WIN!\n");
    }
    else {
        printf("Result: Computer WINS!\n");
    }

    return EXIT_SUCCESS;
}
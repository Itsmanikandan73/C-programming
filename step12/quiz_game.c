#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char question[128];
    char options[4][64];
    int correct_option;
} Question;

int main(void) {
    Question quiz[] = {
        {
            "What does C99 introduced inline loop declarations allow?",
            {"1. for int(i = 0;...)", "2. while(true)","3. goto statements", "4. #define macros"},1
        },
        {
            "Which operator returns the size in bytes of a data type?",
            {"1. length()", "2. sizeof", "3. malloc","4. size_t"},
            2
        }
    };

    size_t total_q = sizeof(quiz) / sizeof(quiz[0]);
    int score = 0;

    printf("=== Quick C Quiz ===\n");

    for (size_t i = 0; i < total_q; i++) {
        printf("Q%zu: %s\n", i + 1, quiz[i].question);
        for (int j = 0; j < 4; j++) {
            printf("    %s\n", quiz[i].options[j]);
        }

        int answer = 0;
        printf("Your answer (1-4): ");
        if (scanf("%d", &answer) == 1 && answer == quiz[i].correct_option){
            printf("Correct!\n\n");
            score++;
        }
        else {
            printf("Incorrect.\n\n");
        }
    }

    printf("Quiz finished! Final Score: %d/%zu\n", score, total_q);
    return EXIT_SUCCESS;
}
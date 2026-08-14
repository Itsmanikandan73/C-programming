#include <stdio.h>
#include <stdbool.h>

// Returns true if division was successfull; false if division by zero
bool safe_divide(int numerator, int denominator, int *out_result) {
    if (denominator == 0 || out_result == NULL) {
        return false;   // Error condition
    }

    *out_result = numerator / denominator;
    return true;    // success condition
}

int main(void) {
    int result = 0;

    // Successful division 
    if (safe_divide(20, 4, &result)) {
        printf("20 / 4 = %d\n", result);
    }
    else {
        fprintf(stderr, "Error: Division failed\n");
    }

    // Error case handling 
    if (safe_divide(10, 0, &result)) {
        printf("10 / 0 = %d\n", result);
    }
    else {
        fprintf(stderr,"Error: Division by zero prevented!\n");
    }

    return 0;
}


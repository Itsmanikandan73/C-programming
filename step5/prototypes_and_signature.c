#include <stdio.h>

// Function prototypes
void print_banner(void);
int add_numbers(int a, int b);

int main(void) {
    print_banner();

    int result = add_numbers(15,28);
    printf("Result of the addition: %d\n", result);

    return 0;
}

// Function Definitions
void print_banner(void) {
    printf("========================================\n");
    printf("    C Modular Function Engine Active    \n");
    printf("========================================\n");
}

int add_numbers(int a, int b) {
    return a + b;
}
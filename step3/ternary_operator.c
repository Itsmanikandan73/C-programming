#include <stdio.h>

int main(void) {
    int a = 45;
    int b = 82;

    // Find maximum value using ternary
    int max = (a > b) ? a : b;
    printf("Max value between %d and %d is: %d\n",  a, b, max);

    // Check even or odd 
    int number = 17;
    printf("Number %d is %s.\n", number, (number % 2 == 0) ? "Even" : "Odd");

    return 0;
}
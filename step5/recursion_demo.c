#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(unsigned int n) {
    // Base case 
    if (n <= 1) {
        return 1;
    }
    // Recursive step
    return n * factorial(n - 1);
}

int main(void) {
    unsigned int num = 5;
    printf("Factorial of %u = %llu\n", num, factorial(num));

    return 0;
}
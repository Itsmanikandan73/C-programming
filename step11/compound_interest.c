#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 1000.0;  // Starting amount 
    double rate = 0.05;
    int years = 5;

    printf("--- Compound Interest Projection ---\n");
    printf("Initial Principal: %.2f\n", principal);
    printf("Annual Rate:       %.1f\n\n", rate * 100);

    printf("Year\tTotal Balance\n");
    printf("----------------------\n");

    for (int y = 1; y <= years; y++) {
        double amount = principal * pow(1.0 + rate, y);
        printf("%d\t$%.2f\n", y, amount);
    }

    return 0;
}
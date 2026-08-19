#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double base = 2.0;
    double exponent = 8.0;
    double val = 49.0;
    double negative_val = -12.34;

    printf("2.0 ^ 8.0       = %.2f\n", pow(base, exponent));
    printf("sqrt(49.0)      = %.2f\n", sqrt(val));
    printf("fabs(-12.34)    = %.2f\n", fabs(negative_val));
    printf("floor(4.8)      = %.2f\n", floor(4.8));
    printf("ceil(4.2)       = %.2f\n", ceil(4.2));

    return EXIT_SUCCESS;
}
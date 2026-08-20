#include <stdio.h>
#include <stdbool.h>

void print_menu(void) {
    printf("\n=== Mini Calculator ===\n");
    printf("1. Add (+)\n");
    printf("2. Sub (-)\n");
    printf("3. Mul (*)\n");
    printf("4. Divi (/)\n");
    printf("5. Exit\n");
    printf("select option: ");
}

int main(void) {
    int choice = 0;
    double a = 0.0, b = 0.0;

    while (true) {
        print_menu();
        if (scanf ("%d", &choice) != 1 || choice == 5) {
            printf("Exiting calculator.\n");
            break;
        }         
        
        if (choice < 1 || choice > 4) {
            printf("Invalid selection.\n");
            continue;
        }

        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &a, &b) != 2) {
            printf("Invalid number input.\n");
            break;
        }
        
        switch (choice) {
            case 1: printf("Result: %.2f\n", a  + b); break;
            case 2: printf("Result: %.2f\n", a - b); break;
            case 3: printf("Result: %.2f\n", a * b); break;
            case 4: 
                if (b == 0.0) {
                    fprintf(stderr, "Error: Division by zero!\n");
                }
                else {
                    printf("Result: %.2f\n", a / b);
                }
                break;
        }
    }
    return 0;
}
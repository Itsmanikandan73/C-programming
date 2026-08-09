#include <stdio.h>
#include <stdbool.h>

int main(void) {
    size_t n = 42;
    int integer_var = 42;
    float float_var = 3.14f;
    double double_var = 3.1415926535;
    char char_var = 'A';
    bool bool_var = true;

    printf("--- Variable Values ---\n");
    printf("int:    %d\n", integer_var);
    printf("float:  %.2f\n", float_var);
    printf("double: %.10f\n", double_var);
    printf("char: %c\n", char_var);
    printf("bool: %s\n\n", bool_var ? "true" : "false");

    printf("--- Memory Sizes (Bytes) ---\n");
    printf("sizeof(int):    %zu bytes\n", sizeof(integer_var));
    printf("sizeof(float):  %zu bytes\n", sizeof(float_var));
    printf("sizeof(double): %zu bytes\n", sizeof(double_var));
    printf("sizeof(char):   %zu bytes\n", sizeof(char_var));
    printf("sizeof(bool):    %zu bytes\n", sizeof(bool_var));
    printf("sizeof(n):  %zu bytes\n", sizeof(n));
    
    return 0;
}
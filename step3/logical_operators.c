#include <stdio.h>
#include <stdbool.h>

// Demostrating AND(&&), NOT (!), OR (||)

int main(void) {
    int age = 22;
    bool has_id = true;
    bool is_banned = false;

    // Logical AND (&&) and NOT (!) 
    if (age >= 18 && has_id && !is_banned) {
        printf("Access granted.\n");
    } 
    else {
        printf("Access denied.\n");
    }

    // Demostrating logical OR (||) 
    bool is_admin = false;
    bool is_root = true;

    if (is_admin || is_root) {
        printf("Elevated privileges active.\n");
    }

    return 0;
}
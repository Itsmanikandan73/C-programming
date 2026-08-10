#include <stdio.h>

int main(void) {
    int user_level = 2;
    int auth_token = 1337;

    if (user_level > 0) {
        printf("User authenticated.\n");

        if (auth_token == 1337) {
            printf("Token verified: Full system access.\n");
        }
        else {
            printf("Token invalid: Restricted read-only access.\n");
        }
    }
    else {
        printf("Unauthenticated session.\n");
    }
    return 0;
}
#include <stdio.h>

int main(void) {
    char key_input = 'd';

    printf("Action: ");
    switch (key_input) {
        case 'w':
        case 'W':
            printf("Move Forward\n");
            break;
        case 's':
        case 'S':
            printf("Move Backward\n");
            break;
        case 'a':
        case 'A':
            printf("Strafe Left\n");
            break;
        case 'd':
        case 'D':
            printf("Strafe Right\n");
            break;
        default:
            printf("Unknown key command\n");
            break;
    }
    return 0;
}
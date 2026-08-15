#include <stdio.h>
#include <string.h>

int  main(void) {
    char username[32];

    printf("Enter your username: ");

    // Read at most of sizeof(username)-1 characters
    if (fgets(username, sizeof(username), stdin) != NULL) {
        // Strip trailing newline character if present
        size_t len = strlen(username);
        if (len > 0 && username[len - 1] =='\n') {
            username[len - 1] = '\0';
        }
        printf("Welcome, %s!\n", username);
    }
    return 0;
}
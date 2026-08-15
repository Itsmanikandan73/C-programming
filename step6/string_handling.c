#include <stdio.h>
#include <string.h>

int main(void) {
    char source[] = "x86owl";
    char destination[32];

    // Copy string safely || using strlcpy instead of strcpy
    strlcpy(destination, source, sizeof(destination));
    destination[sizeof(destination) - 1] = '\0';    // Ensure null termination

    size_t len = strlen(destination);

    printf("Source:      %s\n", source);
    printf("Destination: %s\n", destination);
    printf("Length:      %zu characters\n", len);

    return 0;
}
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t raw_time;
    struct tm *time_info;
    char buffer[64];

    // Fetch current epoch timestamp
    time(&raw_time);

    // convert to local time breakdown
    time_info = localtime(&raw_time);

    // Format time string into HH:MM:SS format
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", time_info);
    printf("=== System Terminal Clock ===\n");
    printf("Current System Time: %s\n", buffer);

    return 0;
}
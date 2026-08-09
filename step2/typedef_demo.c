#include <stdio.h>
// Define custom type aliases
typedef unsigned char byte;
typedef unsigned int uint32;
typedef float priority_score;

int main(void) {
    byte flags = 0xFF;
    uint32 total_count = 1500;
    priority_score score = 98.5f;

    printf("Flags (Hex): 0x%X\n", flags);
    printf("Total Count: %u\n", total_count);
    printf("Score:      %.2f\n", score);

    return 0;
}
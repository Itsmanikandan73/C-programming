#include <stdio.h>

void counter_demo(void) {
    int regular_count = 0;
    static int static_count = 0;    // Initialized only once, persists across calls

    regular_count++;
    static_count++;

    printf("regular: %d  |  static: %d\n", regular_count, static_count);
}

int main(void) {
    printf("--- Calling function 3 times ---\n");
    counter_demo();
    counter_demo();
    counter_demo();

    return 0;
}
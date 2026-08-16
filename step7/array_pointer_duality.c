#include <stdio.h>

int main(void) {
    int values[] = {100, 200, 300, 400};
    size_t count = sizeof(values) / sizeof(values[0]);

    printf("--- Accessing elements via Subscript vs Pointer Arithmetic ---\n");
    for (size_t i = 0; i < count; i++) {
        printf("Index %zu: values[%zu] = %d | *(values + %zu) = %d\n", i, i, values[i], i, *(values + i));
    }

    return 0;
}
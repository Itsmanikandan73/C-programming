#include <stdio.h>

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};

    // Calculate number of elements dynamically
    size_t count = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array total size: %zu bytes\n", sizeof(numbers));
    printf("Element count:    %zu \n\n", count);

    for (size_t i = 0; i < count; i++) {
        printf("numbers[%zu] = %d (Address: %p)\n", i, numbers[i], (void *) &numbers[i]);
    }
    return 0;
}
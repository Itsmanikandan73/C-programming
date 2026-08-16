#include <stdio.h>

int main(void) {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Points to arr[0]

    printf("Inital address (ptr):       %p | value: %d\n", (void *)ptr, *ptr);
    
    ptr++;  // Moves by sizeof(int) bytes
    printf("After ptr++ (ptr + 1):      %p | value: %d\n", (void *)ptr, *ptr);

    ptr += 2;   // moves forward by 2 more integers
    printf("After ptr += 2 (ptr + 3):   %p | value: %d\n", (void *)ptr, *ptr);

    return 0;
}
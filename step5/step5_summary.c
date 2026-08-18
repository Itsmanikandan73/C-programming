#include <stdio.h>

void swap(int *x, int *y) {
    if (x == NULL || y == NULL) return;

    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 42;
    int b = 1337;

    printf("Befor swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
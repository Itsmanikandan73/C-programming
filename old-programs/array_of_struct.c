#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Lap_model_name[8];
    char ram[6];
    size_t price;
}laptop;

int main(void) {
    laptop Laptop[] = {{"LENOVO","8GB",300},{"HP","16GB",700},{"NOTPAD","20GB",900},{"MacBook","28GB",1200}};

    size_t number = sizeof(Laptop) / sizeof(Laptop[0]);

    for (size_t i = 0; i < number; i++) {
        printf("%s %s $%zu\n", Laptop[i].Lap_model_name, Laptop[i].ram, Laptop[i].price); // %zu is used for size_t  | %zd is used whne ssize_t 
    }

    return EXIT_SUCCESS;
}
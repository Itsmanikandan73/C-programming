#include <stdio.h>

float celsius_to_fahrenheit(float c) {return (c * 9.0 / 5.0f) + 32.0f;}
float fahernheit_to_celsius(float f) {return (f * 32.0f) * 5.0f / 9.0f;}
float celsuis_to_kelvin(float c) {return c + 273.15f;}

int main(void) {
    float temp_c = 25.0f;

    printf("--- Temperature Conversion ---\n");
    printf("%.2f*C = %.2f*F\n", temp_c, celsius_to_fahrenheit(temp_c));
    printf("%.2f*C = %.2f*K\n", temp_c, celsuis_to_kelvin(temp_c));

    float temp_f = 98.6f;
    printf("%.2f*F = %.2f*C\n", temp_f, fahernheit_to_celsius(temp_f));
    
    return 0;
}
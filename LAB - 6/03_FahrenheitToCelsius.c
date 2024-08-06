#include <stdio.h>

int main() {
    float fahrenheit;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius is: %.2f\n", celsius);
    return 0;
}

#include <stdio.h>

void main() {
    double fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Print the converted temperature in Celsius
    printf("%.2lf Fahrenheit is equal to %.2lf Celsius.\n", fahrenheit, celsius);

}


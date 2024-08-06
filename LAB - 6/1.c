#include <stdio.h>

void main() {
    double height, base;
    double area;

    printf("Enter height of the triangle: ");
    scanf("%lf", &height);
    printf("Enter base of the triangle: ");
    scanf("%lf", &base);

    area = (height * base) / 2.0;

    // Print the calculated area
    printf("Area of the triangle with height %.2lf and base %.2lf is: %.2lf\n", height, base, area);

}


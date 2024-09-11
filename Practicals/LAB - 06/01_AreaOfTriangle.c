#include <stdio.h>

int main() {
    float base, height;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    float area = 0.5 * base * height;
    printf("Area of the triangle with base %.2f and height %.2f is: %.2f\n", base, height, area);
    return 0;
}

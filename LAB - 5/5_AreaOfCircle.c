#include <stdio.h>
#define PI 3.14

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = PI * radius * radius;
    printf("Area of the circle with radius %.2f is: %.2f\n", radius, area);
    return 0;
}

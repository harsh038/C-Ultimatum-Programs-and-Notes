// Type Conversion

// Implicit and explicit (casting) type conversions.
#include <stdio.h>

int main()
{
    int i = 10;
    float f = i; // Implicit conversion

    float f2 = 5.5;
    int i2 = (int)f2; // Explicit conversion

    printf("Implicit: %f\n", f);
    printf("Explicit: %d\n", i2);

    return 0;
}
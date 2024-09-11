// Data Types

// Basic data types in C: int, float, double, char
#include <stdio.h>

int main()
{
    int num = 5;     // Integer
    float f = 5.5;   // Float
    double d = 5.55; // Double
    char c = 'A';    // Character

    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", f);
    printf("Double: %.2lf\n", d);
    printf("Character: %c\n", c);

    return 0;
}
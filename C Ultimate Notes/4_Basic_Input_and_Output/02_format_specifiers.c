// Format Specifiers

// Format specifiers tell the type of data to be printed/scanned.
#include <stdio.h>

int main()
{
    int num = 10;
    float f = 5.5;
    char c = 'A';

    // %d for int, %f for float, %c for char
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", f);
    printf("Character: %c\n", c);

    return 0;
}
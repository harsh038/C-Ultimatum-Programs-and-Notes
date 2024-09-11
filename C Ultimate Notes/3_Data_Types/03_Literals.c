// Literals

// Literals are fixed values: integer, floating-point, character, string
#include <stdio.h>

int main()
{
    int num = 10;         // Integer literal
    float f = 10.5;       // Floating-point literal
    char c = 'A';         // Character literal
    char str[] = "Hello"; // String literal

    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", f);
    printf("Character: %c\n", c);
    printf("String: %s\n", str);

    return 0;
}
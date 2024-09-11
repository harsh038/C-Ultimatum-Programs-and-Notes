// Integer Promotions

// Integer promotions convert smaller integer types to int.
#include <stdio.h>

int main()
{
    char c = 'A';
    int i = c; // Promotion of char to int

    printf("Character: %c, Integer: %d\n", c, i);

    return 0;
}
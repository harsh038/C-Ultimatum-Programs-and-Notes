// Data Type Modifiers

#include <stdio.h>

/*
Modifiers: signed, unsigned, short, long
Used to change the size or sign of data types.
*/

// signed and unsigned int
void int_modifiers_example()
{
    signed int a = -10;
    unsigned int b = 10;
    printf("Signed int: %d, Unsigned int: %u\n", a, b);
}

// short and long int
void short_long_example()
{
    short int s = 32767;
    long int l = 2147483647;
    printf("Short int: %d, Long int: %ld\n", s, l);
}

int main()
{
    int_modifiers_example();
    short_long_example();
    return 0;
}
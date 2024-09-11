// sizeof Operator

// sizeof gives the size of a variable or datatype.
#include <stdio.h>

int main()
{
    int a;
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

    return 0;
}
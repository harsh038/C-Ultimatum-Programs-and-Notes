// Unary Operators

// +, -, ++, --, !
#include <stdio.h>

int main()
{
    int a = 10;
    printf("Unary minus: %d\n", -a);
    printf("Unary plus: %d\n", +a);
    printf("Increment: %d\n", ++a);
    printf("Decrement: %d\n", --a);
    printf("Logical NOT: %d\n", !a);

    return 0;
}
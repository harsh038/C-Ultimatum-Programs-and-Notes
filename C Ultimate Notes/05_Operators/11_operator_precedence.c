// Operator Precedence and Associativity

// Determines the order of operations.
#include <stdio.h>

int main()
{
    int a = 2, b = 3, c = 4;
    int result = a + b * c; // Multiplication before addition
    printf("Result: %d\n", result);

    return 0;
}
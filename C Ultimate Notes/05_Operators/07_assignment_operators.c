// Assignment Operators

// =, +=, -=, *=, /=, %=
#include <stdio.h>

int main()
{
    int a = 10;
    a += 5;
    printf("a += 5: %d\n", a);
    a -= 2;
    printf("a -= 2: %d\n", a);
    a *= 3;
    printf("a *= 3: %d\n", a);
    a /= 2;
    printf("a /= 2: %d\n", a);
    a %= 3;
    printf("a %%= 3: %d\n", a);

    return 0;
}
// Bool

// _Bool or bool (C99) represent boolean values.
#include <stdio.h>
#include <stdbool.h> // Include for bool type

int main()
{
    _Bool flag1 = 1;   // _Bool type
    bool flag2 = true; // bool type (C99)

    printf("Flag1: %d\n", flag1);
    printf("Flag2: %d\n", flag2);

    return 0;
}
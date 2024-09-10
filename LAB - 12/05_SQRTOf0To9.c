#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    while (i <= 9)
    {
        printf("Number : %d, Square Root : %.2f\n", i, (float)sqrt(i));
        i++;
    }
    return 0;
}
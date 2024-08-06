#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("Number is Zero\n");
    }
    else if (a > 0)
    {
        printf("Number is Positive\n");
    }
    else
    {
        printf("Number is Negative\n");
    }
    return 0;
}

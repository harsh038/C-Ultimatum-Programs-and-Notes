#include <stdio.h>

int main()
{
    int i = 1, num;
    printf("Enter Last Number : ");
    scanf("%d", &num);
    while (i <= num)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
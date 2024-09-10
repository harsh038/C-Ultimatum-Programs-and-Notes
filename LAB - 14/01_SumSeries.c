#include <stdio.h>

int main()
{
    int i = 1, num, total = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            printf("-%d", i);
            total = total - i;
        }
        else
        {
            if (i == 1)
            {
                printf("%d", i);
            }
            else
            {
                printf("+%d", i);
            }
            total = total + i;
        }
        i++;
    }
    printf("\n");
    printf("The final total is: %d", total);
    return 0;
}
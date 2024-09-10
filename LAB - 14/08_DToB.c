#include <stdio.h>
int main()
{
    int num, i = 0, series = 1;
    printf("Enter a Decimal Number : ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("0");
    }
    while (num > series)
    {
        series = series + series;
    }
    if (num == series)
    {
        printf("1");    
        while (series != 1)
        {
            series = series - (series / 2);
            printf("0");
        }
    }
    else if (series > num)
    {
        while (series != 1)
        {
            series = series - (series / 2);
            if (num - series >= 0)
            {
                num = num - series;
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }
    return 0;
}
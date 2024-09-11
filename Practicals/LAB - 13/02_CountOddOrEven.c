#include <stdio.h>

int main()
{
    int num, i = 1, even = 0, odd = 0;
    while (i <= 10)
    {
        printf("Enter your %d number : ", i);
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even++;
        }
        i++;
    }
    odd = 10 - even;
    printf("Number of odd numbers entered : %d\n", odd);
    printf("Number of even numbers entered : %d\n", even);
    return 0;
}
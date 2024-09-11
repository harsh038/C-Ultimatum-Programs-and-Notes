#include <stdio.h>

int main()
{
    int num, rem1, rem2, revnum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Zero");
        return 0;
    }
    while (num != 0)
    {
        rem1 = num % 10;
        num = num / 10;
        revnum = revnum * 10 + rem1;
    }
    while (revnum != 0)
    {
        rem2 = revnum % 10;
        revnum = revnum / 10;
        if (rem2 == 1)
        {
            printf("One ");
        }
        else if (rem2 == 2)
        {
            printf("Two ");
        }
        else if (rem2 == 3)
        {
            printf("Three ");
        }
        else if (rem2 == 4)
        {
            printf("Four ");
        }
        else if (rem2 == 5)
        {
            printf("Five ");
        }
        else if (rem2 == 6)
        {
            printf("Six ");
        }
        else if (rem2 == 7)
        {
            printf("Seven ");
        }
        else if (rem2 == 8)
        {
            printf("Eight ");
        }
        else if (rem2 == 9)
        {
            printf("Nine ");
        }
    }
    return 0;
}

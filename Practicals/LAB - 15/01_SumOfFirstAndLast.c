#include <stdio.h>

int main()
{
    int last, num, revnum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    while (num != 0)
    {
        revnum = (revnum * 10) + (num % 10);
        num = num / 10;
    }
    revnum = revnum % 10;
    printf("Sum of first and last digit of the number is: %d", last + revnum);
    return 0;
}
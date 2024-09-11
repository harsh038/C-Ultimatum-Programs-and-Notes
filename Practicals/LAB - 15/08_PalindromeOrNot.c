#include <stdio.h>

int main()
{
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int dup =num;
    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    if (dup == rev)
    {
        printf("%d is a palindrome number.", dup);
    }
    else
    {
        printf("%d is not a palindrome number.", dup);
    }
    return 0;
}
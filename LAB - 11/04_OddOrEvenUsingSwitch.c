#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is Even", num) : printf("%d is Odd", num);
    return 0;
}
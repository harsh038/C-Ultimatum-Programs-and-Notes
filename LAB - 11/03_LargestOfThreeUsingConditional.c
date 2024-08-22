#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    (a > b && a > c) ? printf("%d is max", a) : ((b > c && b > a) ? printf("%d is max", b) : printf("%d is max", c));
    return 0;
}
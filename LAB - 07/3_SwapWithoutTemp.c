#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter numbers in A : ");
    scanf("%d", &a);
    printf("Enter numbers in B : ");
    scanf("%d", &b);
    printf("Before swapping, a = %d and b = %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, a = %d and b = %d", a, b);
    return 0;
}
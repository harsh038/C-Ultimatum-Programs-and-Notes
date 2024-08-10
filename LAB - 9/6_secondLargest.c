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

    int largest, secondLargest;
    if (a >= b && a >= c)
    {
        largest = a;
        secondLargest = (b >= c) ? b : c;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
        secondLargest = (a >= c) ? a : c;
    }
    else
    {
        largest = c;
        secondLargest = (a >= b) ? a : b;
    }

    printf("%d is the Second largest number\n", secondLargest);
    return 0;
}

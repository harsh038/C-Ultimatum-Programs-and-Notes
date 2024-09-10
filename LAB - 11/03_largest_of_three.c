#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("Largest number is %d\n", largest);

    return 0;
}

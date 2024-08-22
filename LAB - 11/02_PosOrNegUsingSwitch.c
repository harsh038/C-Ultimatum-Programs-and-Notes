#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num == 0) ? (printf("%d Zeroo!!!", num)) : ((num > 0) ? (printf("%d is Positive.", num)) : (printf("%d is Negative.", num)));
    return 0;
}
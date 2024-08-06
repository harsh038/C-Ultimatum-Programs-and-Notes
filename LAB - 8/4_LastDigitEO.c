//  Input an integer number and check the last digit of number is even or odd.
#include <stdio.h>

int main() {
    int num , lastDigit;
    printf("Enter a Number : ");
    scanf("%d", &num);
    lastDigit = num % 10;
    if (lastDigit%2==0)
    {
        printf("%d , last digit %d is even number.",num,lastDigit);
    }
    else
    {
        printf("%d , last digit %d is odd number.",num,lastDigit);
    }
    return 0;
}
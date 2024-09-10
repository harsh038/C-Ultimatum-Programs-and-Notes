#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num<2)
    {
        printf("%d is not a prime number\n", num);
        return 0;
    }
    int i =2;
    int limit = (int)sqrt(num);
    while (i<=limit)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number\n", num);
            return 0;
        }
        i++;
    }
    printf("%d is a prime number\n", num);
    return 0;
}
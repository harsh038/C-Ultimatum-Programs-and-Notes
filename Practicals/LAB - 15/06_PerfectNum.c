#include <stdio.h>

int main() {
    int num,i=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (i!=(num/2)+1)
    {
        if (num%i==0)
        {
            sum = sum +i;
        }
        i++;   
    }
    if (sum==num)
    {
        printf("%d is a perfect number",num);
    }
    else
    {
        printf("%d is not a perfect number",num);
    }
    return 0;
}
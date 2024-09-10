#include <stdio.h>

int main() {
    int num,rem,count=0,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int dup =num;
    if (num==0)
    {
        printf("%d is a Armstrong",num);
        return 0;
    }
    while (dup!=0)
    {
        count++;
        // rem = dup%10;
        dup = dup/10;
    }
    dup = num;
    while (dup!=0)
    {
        int i=1;
        rem = dup%10;
        // printf("rem :%d \n",rem);
        int total=1;
        while (i<=count )
        {
            total =total*rem;
            i++;
        }
        // printf("%d \n",total);
        sum=sum+total;
        dup = dup/10;
    }
    if (sum==num)
    {
        printf("Number is a Armstrong");
    }
    else
    {
        printf("Number is not a Armstrong");
    }
    return 0;
}
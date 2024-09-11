#include <stdio.h>

int main()
{
    int num ,sum=0,flag=0;
    float avg=0;
    char choice;
    do
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        sum=sum+num;
        flag++;
        printf("Do you want to continue? (y/n): ");
        scanf(" %c",&choice);
    } while(choice=='Y'||choice=='y');

    if (flag>0)
    {
        printf("Sum is : %d\n",sum);
        avg = (float)sum / flag;
        printf("Average is : %.2f",avg);
    }
    else
    {
        printf("No Valid Number Entered");
    }
    return 0;
}
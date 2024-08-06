// Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice
#include <stdio.h>

int main() {
    int num1 , num2;
    char ASDM;
    
    printf("Enter value of num1 : ");
    scanf("%d",&num1);
    printf("Enter value of num2 : ");
    scanf("%d",&num2);
    printf("Enter Operation Sign you want to perform Between Two Number [+ , - , * , /] : ");
    scanf("%c",&ASDM);
    if (ASDM=='+')
    {
        printf("%d + %d = %d",num1,num2,num1+num2);
    }
    else if (ASDM=='-')
    {
        printf("%d - %d = %d",num1,num2,num1-num2);
    }
    else if (ASDM=='*')
    {
        printf("%d * %d = %d",num1,num2,num1*num2);
    }
    else if (ASDM=='/')
    {
        printf("%d / %d = %d",num1,num2,num1/num2);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int num1 , num2 , num3 , flag;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>=num2)
    {
        flag = 1;
    }
    else
    {
        flag = 2;
    }
    
    switch (flag)
    {
    case  1:
        printf(" %d * %d = %d",num1 , num3 ,(num1*num3));
        break;
    case  2:
        printf(" %d * %d = %d",num2 , num3 ,(num2*num3));
        break;
    }
    return 0;
}
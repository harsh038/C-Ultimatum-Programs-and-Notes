#include <stdio.h>
void main() {
    int num1 , num2 , num3;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    switch (num1>num2)
    {
    case  0:
        printf("%d",(num2*num3));
        break;
    case  1:
        printf("%d",(num1*num3));
        break;
    }
}
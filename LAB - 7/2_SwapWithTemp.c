// 2_SwapWithTemp.c
#include <stdio.h>

int main() {
    int a ,b,temp;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    temp =a;
    a=b;
    b=temp;
    printf("Value of a after swapping: %d\n",a);
    printf("Value of b after swapping: %d\n",b);
    return 0;
}
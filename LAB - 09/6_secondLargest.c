#include <stdio.h>
void main()
{
    int a, b, c, secondLargest;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        if(b>=c){
            secondLargest = b;
        }
        else{
            secondLargest = c;
        }
    }
    else if (b >= a && b >= c)
    {
        if(a>=c){
            secondLargest = a;
        }
        else{
            secondLargest = c;
        }
    }
    else
    {
        if(a>=b){
            secondLargest = a;
        }
        else{
            secondLargest = b;
        }
    }
    printf("%d is the Second largest number\n", secondLargest);
    return 0;
}

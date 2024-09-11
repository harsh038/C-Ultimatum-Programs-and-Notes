#include <stdio.h>

int main() {
    int x , y,i=1,ans=1;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    while (i<=y)
    {
        ans = ans*x;
        i++;
    }   
    printf("The value of x^y is: %d",ans);
    return 0;
}
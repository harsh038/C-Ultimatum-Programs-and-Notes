#include <stdio.h>

int main() {
    int i=1,num,fact=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i<=num)
    {
        fact*=i;
        i++;
    }
    printf("Factorial of %d : %d", num, fact);
    return 0;
}
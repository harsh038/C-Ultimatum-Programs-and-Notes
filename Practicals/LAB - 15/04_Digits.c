#include <stdio.h>

int main() {
    int num,rem,rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num!=0)
    {
        rev = (rev*10)+(num%10);
        num=num/10;
    }
    while(rev!=0)
    {
        rem =rev%10;
        rev=rev/10;
        printf("%d\n",rem);
    }
    return 0;
}
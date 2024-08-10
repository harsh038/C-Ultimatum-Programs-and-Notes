// 03_ASMDUsingSwitch.c
#include <stdio.h>

int main()
{
    char sign;
    printf("Enter a Sign: ");
    scanf("%c", &sign);
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    switch (sign)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        if (b != 0)
        {
            printf("%d / %d = %.2f\n", a, b, (float)a / b);
        }
        else
        {
            printf("Error! Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid operator. Please enter +, -, *, /");
    }
    return 0;
}
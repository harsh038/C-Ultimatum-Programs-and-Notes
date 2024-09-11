#include <stdio.h>

int main()
{
    int num1, num2;
    char operation;

    printf("Enter value of num1: ");
    scanf("%d", &num1);
    printf("Enter value of num2: ");
    scanf("%d", &num2);
    printf("Enter operation sign you want to perform between two numbers [+ , - , * , /]: ");
    scanf(" %c", &operation);

    if (operation == '+')
    {
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if (operation == '-')
    {
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    }
    else if (operation == '*')
    {
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }
    else if (operation == '/')
    {
        if (num2 != 0)
        {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid operation.\n");
    }

    return 0;
}

/*
When you read the character operator with scanf("%c", &ASDM);
it reads this leftover newline character instead of waiting for user input.

Fix:

To handle this, include a space before %c in scanf(" %c", &ASDM);
The space tells scanf()
to ignore any whitespace characters (including newline) before reading the character.
*/
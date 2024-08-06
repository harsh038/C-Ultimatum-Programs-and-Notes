// Check whether the entered character is upper case, lower case, digit or any special character.
#include <stdio.h>

int main()
{
    char wow;
    printf("Enter a character: ");
    scanf("%c", &wow);
    if (wow >= 97 && wow <= 122)
    {
        printf("%c is a lowercase letter.\n", wow);
    }
    else if (wow >= 65 && wow <= 90)
    {
        printf("%c is an uppercase letter.\n", wow);
    }
    else if (wow >= 48 && wow <= 57)
    {
        printf("%c is a digit.\n", wow);
    }
    else
    {
        printf("%c is a special character.\n", wow);
    }

    return 0;
}
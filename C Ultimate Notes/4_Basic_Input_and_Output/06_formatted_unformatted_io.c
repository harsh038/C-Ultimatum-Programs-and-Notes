// Formatted and Unformatted Input/Output Functions

#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter a string: ");
    gets(str); // Unformatted input
    printf("You entered: ");
    puts(str); // Unformatted output

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);                // Formatted input
    printf("You entered: %d\n", num); // Formatted output

    return 0;
}
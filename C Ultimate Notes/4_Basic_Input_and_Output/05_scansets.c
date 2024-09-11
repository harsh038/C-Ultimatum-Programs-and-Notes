// Scansets

// Scansets read specific sets of characters.
#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%[aeiou]", str); // Reads only vowels
    printf("You entered: %s\n", str);
    return 0;
}
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("The character %c is a vowel.", ch);
    }
    else
    {
        printf("The character %c is a consonant.", ch);
    }
    return 0;
}
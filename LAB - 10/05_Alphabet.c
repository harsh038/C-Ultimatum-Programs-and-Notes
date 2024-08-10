#include <stdio.h>

int main()
{
    char alpha;
    printf("Enter a Character : ");
    scanf("%c", &alpha);
    ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z')) ? printf("Entered Character %c is Alphabet", alpha) : printf("Entered Character %c is not Alphabet", alpha);
    return 0;
}
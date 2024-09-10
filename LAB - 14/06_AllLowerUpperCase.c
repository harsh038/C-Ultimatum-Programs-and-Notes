#include <stdio.h>

int main() {
    char ch = 'A';
    printf("All UPPERCASE CHARACTER : \n");
    while(ch<='Z')
    {
        printf("%c ",ch);
        ch++;
    }
    ch='a';
    printf("\nAll LOWERCASE CHARACTER : \n");
    while(ch<='z')
    {
        printf("%c ",ch);
        ch++;
    }
    return 0;
}
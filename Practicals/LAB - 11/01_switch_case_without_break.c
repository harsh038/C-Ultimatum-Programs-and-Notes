#include <stdio.h>

int main()
{
    int choice;
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Case 1\n");
    case 2:
        printf("Case 2\n");
    case 3:
        printf("Case 3\n");
    default:
        printf("Default case\n");
    }
    return 0;
}

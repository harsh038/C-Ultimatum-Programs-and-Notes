#include <stdio.h>

int main()
{
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    if (day == 1)
    {
        printf("Sunday\n");
    }
    else if (day == 2)
    {
        printf("Monday\n");
    }
    else if (day == 3)
    {
        printf("Tuesday\n");
    }
    else if (day == 4)
    {
        printf("Wednesday\n");
    }
    else if (day == 5)
    {
        printf("Thursday\n");
    }
    else if (day == 6)
    {
        printf("Friday\n");
    }
    else if (day == 7)
    {
        printf("Saturday\n");
    }
    else
    {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
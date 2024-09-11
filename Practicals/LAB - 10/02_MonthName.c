#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("31 days (January)");
        break;
    case 2:
        printf(" 28 days (February) or 29 days in a leap year");
        break;
    case 3:
        printf("31 days (March)");
        break;
    case 4:
        printf("30 days (April)");
        break;
    case 5:
        printf("31 days (May)");
        break;
    case 6:
        printf("30 days (June)");
        break;
    case 7:
        printf("31 days (July)");
        break;
    case 8:
        printf("31 days (August)");
        break;
    case 9:
        printf("30 days (September)");
        break;
    case 10:
        printf("31 days (October)");
        break;
    case 11:
        printf("30 days (November)");
        break;
    case 12:
        printf("31 days (December)");
        break;
    default:
        printf("Month Not Found");
        break;
    }
    return 0;
}
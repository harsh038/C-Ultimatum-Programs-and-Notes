
#include <stdio.h>
void main() {
    int days, years, weeks, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    remainingDays = days % 365;
    weeks = remainingDays / 7;
    remainingDays = remainingDays % 7;

    printf("%d days = %d year(s), %d week(s), and %d day(s)\n", days, years, weeks, remainingDays);
}


// Read marks of ƒve subjects. Calculate percentage and print class accordingly.
//  Fail below 35,
//  Pass Class between 36 to 45, 
//  Second Class between 46 to 60, 
//  First Class between 61 to 70,
//  Distinction if more than 70.
#include <stdio.h>

int main() {
    int CP , CLang , English , WD , xyz;
    printf("Enter the marks of CP : ");
    scanf("%d",&CP);
    printf("Enter the marks of CLang : ");
    scanf("%d",&CLang);
    printf("Enter the marks of English : ");
    scanf("%d",&English);
    printf("Enter the marks of WD : ");
    scanf("%d",&WD);
    printf("Enter the marks of xyz : ");
    scanf("%d",&xyz);
    int totalMarks =CP + CLang + English + WD + xyz;
    float percentage = (totalMarks/500.0)*100;
    if (percentage<35)
    {
        printf("ohh You failed the Exam.\n");
    }
    else if (percentage>=35 && percentage<=45)
    {
        printf("You got pass class.\n");
    }
    else if (percentage>=46 && percentage<=60)
    {
        printf("You got second class.\n");
    }
    else if (percentage>=61 && percentage<=70)
    {
        printf("You got first class.\n");
    }
    else if (percentage>70)
    {
        printf("You got distinction.\n");
    }
    return 0;
}
#include <stdio.h>

void main()
{
    int FCA, CLang, English, WD, PC;

    printf("Enter the marks for Fundamentals of Computer Applications (FCA): ");
    scanf("%d", &FCA);

    printf("Enter the marks for C Language (CLang): ");
    scanf("%d", &CLang);

    printf("Enter the marks for English: ");
    scanf("%d", &English);

    printf("Enter the marks for Web Development (WD): ");
    scanf("%d", &WD);

    printf("Enter the marks for Programming Concepts (PC): ");
    scanf("%d", &PC);

    int totalMarks = FCA + CLang + English + WD + PC;
    float percentage = (float)totalMarks / 5;

    if (percentage < 35)
    {
        printf("You failed the exam.\n");
    }
    else if (percentage >= 35 && percentage < 46)
    {
        printf("You got pass class.\n");
    }
    else if (percentage >= 46 && percentage < 61)
    {
        printf("You got second class.\n");
    }
    else if (percentage >= 61 && percentage <= 70)
    {
        printf("You got first class.\n");
    }
    else if (percentage > 70)
    {
        printf("You got distinction.\n");
    }
}
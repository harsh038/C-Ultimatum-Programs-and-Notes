#include <stdio.h>
void main() {
    int a, b, c, d, e;
    printf("Enter the marks of CP: ");
    scanf("%d", &a);
    printf("Enter the marks of CLang: ");
    scanf("%d", &b);
    printf("Enter the marks of English: ");
    scanf("%d", &c);
    printf("Enter the marks of WD: ");
    scanf("%d", &d);
    printf("Enter the marks of xyz: ");
    scanf("%d", &e);

    int totalMarks = a + b + c + d + e;
    float percentage = (totalMarks / 5);

    if (percentage < 35) {
        printf("You failed the exam.\n");
    } else if (percentage >= 35 && percentage < 46) {
        printf("You got pass class.\n");
    } else if (percentage >= 46 && percentage < 61) {
        printf("You got second class.\n");
    } else if (percentage >= 61 && percentage <= 70) {
        printf("You got first class.\n");
    } else if (percentage > 70) {
        printf("You got distinction.\n");
    }
}

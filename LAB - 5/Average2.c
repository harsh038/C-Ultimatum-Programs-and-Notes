#include <stdio.h>

void main() {
    int num1, num2, num3;
    double average;

    printf("enter value of num1: ");
    scanf("%d",&num1);
    printf("enter value of num2: ");
    scanf("%d",&num2);
    printf("enter value of num3: ");
    scanf("%d",&num3);
    average = (num1 + num2 + num3) / 3.0;

    // Display the result
    printf("Average of %d, %d, and %d is: %lf\n", num1, num2, num3, average);
}

#include <stdio.h>

void main() {
    double principal, rate, time;
    double simpleInterest;

    // Input principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest per annum: ");
    scanf("%lf", &rate);
    printf("Enter time period in years: ");
    scanf("%lf", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100.0;

    // Print the calculated simple interest
    printf("Simple Interest = %.2lf\n", simpleInterest);

}


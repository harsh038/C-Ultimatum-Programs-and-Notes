#include <stdio.h>

int main() {
    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    float interest = (principal * rate * time) / 100;
    printf("Simple interest for a principal amount of %.2f at a rate of %.2f%% for %.2f years is: %.2f\n", principal, rate, time, interest);
    return 0;
}

#include <stdio.h>

int main() {
    float num1 = 10.0, num2 = 20.0, num3 = 30.0;
    float average = (num1 + num2 + num3) / 3;
    printf("Average of %.2f, %.2f, and %.2f (hard-coded values) is: %.2f\n", num1, num2, num3, average);

    float input1, input2, input3;
    printf("Enter the first number: ");
    scanf("%f", &input1);
    printf("Enter the second number: ");
    scanf("%f", &input2);
    printf("Enter the third number: ");
    scanf("%f", &input3);
    
    average = (input1 + input2 + input3) / 3;
    printf("Average of %.2f, %.2f, and %.2f (user input) is: %.2f\n", input1, input2, input3, average);

    return 0;
}

#include <stdio.h>

int main() {
    int num1 = 5, num2 = 10;
    int sum = num1 + num2;
    printf("Addition of %d and %d (hard-coded values) is: %d\n", num1, num2, sum);

    int input1, input2;
    printf("Enter the first number: ");
    scanf("%d", &input1);
    printf("Enter the second number: ");
    scanf("%d", &input2);
    
    sum = input1 + input2;
    printf("Addition of %d and %d (user input) is: %d\n", input1, input2, sum);

    return 0;
}

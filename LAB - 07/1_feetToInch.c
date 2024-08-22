#include <stdio.h>

int main()
{
    int feet, inches;
    printf("Enter the feet : ");
    scanf("%d", &feet);
    inches = feet * 12;
    printf("The inches is : %d ", inches);
    return 0;
}
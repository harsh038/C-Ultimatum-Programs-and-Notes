// scanf

// scanf reads formatted input from the console.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num); // Reads an integer
    printf("You entered: %d\n", num);
    return 0;
}
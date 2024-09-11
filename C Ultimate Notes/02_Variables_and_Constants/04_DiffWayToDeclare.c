// Different Ways to Declare Variable as Constant

// Use #define or const keyword.
#include <stdio.h>
#define MAX 100 // Macro definition

// Example program: Uses different ways to declare constants
int main()
{
    const int MIN = 0;                                          // const keyword
    printf("The value of MIN is %d and MAX is %d\n", MIN, MAX); // Uses the constants
    return 0;
}
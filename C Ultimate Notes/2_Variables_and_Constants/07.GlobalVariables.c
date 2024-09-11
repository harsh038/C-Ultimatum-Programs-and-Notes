// Global Variables

// Global variables are declared outside any function.
#include <stdio.h>

int globalVar = 10; // Global variable

// Example program: Uses a global variable
void display()
{
    printf("Global Variable inside display: %d\n", globalVar);
}

int main()
{
    display();
    printf("Global Variable inside main: %d\n", globalVar);
    return 0;
}
// Scope Rules

// Scope determines the visibility of variables.
#include <stdio.h>

int globalVar = 10; // Global scope

// Example program: Demonstrates scope rules
void display()
{
    int localVar = 5; // Local scope
    printf("Local Variable: %d\n", localVar);
}

int main()
{
    display();
    printf("Global Variable: %d\n", globalVar);
    return 0;
}
// Internal and External Linkage

// Internal: Visible within the same file.
// External: Visible across files.
#include <stdio.h>

int globalVar = 10; // External linkage

static int staticVar = 20; // Internal linkage

// Example program: Demonstrates linkage
void display()
{
    printf("Static Variable: %d\n", staticVar);
}

int main()
{
    display();
    printf("Global Variable: %d\n", globalVar);
    return 0;
}
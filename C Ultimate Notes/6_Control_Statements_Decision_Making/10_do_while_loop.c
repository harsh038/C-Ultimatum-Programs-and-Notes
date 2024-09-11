// do-while Loop

// Executes code at least once, then repeats while condition is true.
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("i: %d\n", i);
        i++;
    } while (i < 5);
    return 0;
}
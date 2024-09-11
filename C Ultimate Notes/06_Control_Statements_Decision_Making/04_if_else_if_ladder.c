// if-else-if Ladder

// Multiple conditions, one block executed.
#include <stdio.h>

int main() {
    int a = 10;
    if (a > 15) {
        printf("a is greater than 15\n");
    } else if (a > 10) {
        printf("a is greater than 10\n");
    } else if (a > 5) {
        printf("a is greater than 5\n");
    } else {
        printf("a is 5 or less\n");
    }
    return 0;
}
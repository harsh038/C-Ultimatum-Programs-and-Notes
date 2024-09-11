// switch Statement

// Selects one block to execute based on value.
#include <stdio.h>

int main() {
    int a = 2;
    switch (a) {
        case 1:
            printf("a is 1\n");
            break;
        case 2:
            printf("a is 2\n");
            break;
        default:
            printf("a is not 1 or 2\n");
            break;
    }
    return 0;
}
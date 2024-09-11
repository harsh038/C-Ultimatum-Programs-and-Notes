// break Statement

// Exits loop or switch.
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            break;
        }
        printf("i: %d\n", i);
    }
    return 0;
}
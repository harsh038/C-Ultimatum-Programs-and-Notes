// goto Statement

// Jumps to labeled statement.
#include <stdio.h>

int main() {
    int i = 0;
    loop:
    printf("i: %d\n", i);
    i++;
    if (i < 5) {
        goto loop;
    }
    return 0;
}
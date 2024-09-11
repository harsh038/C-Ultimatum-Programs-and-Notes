// for vs while

// for: known iterations, while: condition-based.
#include <stdio.h>

int main() {
    // for loop
    for (int i = 0; i < 5; i++) {
        printf("for i: %d\n", i);
    }

    // while loop
    int j = 0;
    while (j < 5) {
        printf("while j: %d\n", j);
        j++;
    }
    return 0;
}
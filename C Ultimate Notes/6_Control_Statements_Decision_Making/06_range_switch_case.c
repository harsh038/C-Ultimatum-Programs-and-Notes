// Using Range in switch-case

#include <stdio.h>

int main() {
    int a = 15;
    switch (a) {
        case 1 ... 10:
            printf("a is between 1 and 10\n");
            break;
        case 11 ... 20:
            printf("a is between 11 and 20\n");
            break;
        default:
            printf("a is out of range\n");
            break;
    }
    return 0;
}
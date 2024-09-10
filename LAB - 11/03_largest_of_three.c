
#include <stdio.h>

int main() {
    int a = 10, b = 25, c = 15;
    int largest = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("Largest number is %d\n", largest);
    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number between 1 and 5: ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("You entered 1\n");
        case 2:
            printf("You entered 2\n");
        case 3:
            printf("You entered 3\n");
        case 4:
            printf("You entered 4\n");
        case 5:
            printf("You entered 5\n");
        default:
            printf("Number not in range 1-5\n");
    }

    return 0;
}


// INPUT :
// Enter a number between 1 and 5: 1

// OUTPUT :
// You entered 1
// You entered 2
// You entered 3
// You entered 4
// You entered 5
// Number not in range 1-5

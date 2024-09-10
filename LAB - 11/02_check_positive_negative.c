#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    (num == 0) ? printf("Zero\n") : (num > 0) ? printf("Positive\n")
                                              : printf("Negative\n");

    return 0;
}

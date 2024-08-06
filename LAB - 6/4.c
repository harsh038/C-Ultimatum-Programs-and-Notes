#include <stdio.h>

void main() {
    int seconds;
    int hours, minutes, remainingSeconds;

    // Input seconds
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    // Calculate hours, minutes, and remaining seconds
    hours = seconds / 3600;
    remainingSeconds = seconds % 3600;
    minutes = remainingSeconds / 60;
    remainingSeconds = remainingSeconds % 60;

    // Print the time in HH:MM:SS format
    printf("%02d:%02d:%02d\n", hours, minutes, remainingSeconds);

}


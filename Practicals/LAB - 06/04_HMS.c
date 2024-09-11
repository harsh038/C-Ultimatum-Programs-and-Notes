

    #include <stdio.h>

    int main()
    {
        int sec, min, hours, remaining_Sec;
        printf("Enter Seconds : ");
        scanf("%d", &sec);
        hours = sec / 3600;
        remaining_Sec = sec % 3600;
        min = remaining_Sec / 60;
        remaining_Sec = remaining_Sec % 60;
        printf("%d seconds = %d hours %d minutes %d seconds", sec, hours,min,remaining_Sec);
        return 0;
    }
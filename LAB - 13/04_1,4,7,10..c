#include <stdio.h>

int main() {
    int count=1,i=1;
    while(1)
    {
        if(count>50)
        {
            break;
        }
        printf("%d  :   %d\n",count,i);
        i=i+3;
        count++;
    }
    
    return 0;
}
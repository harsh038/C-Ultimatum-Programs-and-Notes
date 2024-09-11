#include <stdio.h>

int main()
{
    int m, n, p;
    printf("Enter the three sides of the triangle: \n");
    scanf("%d %d %d", &m, &n, &p);
    if (m + n > p && n + p > m && m + p > n)
    {
        if (m == n && n == p)
        {
            printf("Equilateral Triangle");
        }
        else if ((m * m + n * n) == p * p || (p * p + n * n) == m * m || (m * m + p * p) == n * n)
        {
            printf("Right Triangle");
        }
        else if (m == n || n == p || p == m)
        {
            printf("Isosceles Triangle");
        }
        else
        {
            printf("Scalene Triangle");
        }
    }
    else
    {
        printf("The sides do not form a valid triangle.");
    }

    return 0;
}
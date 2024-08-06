#include <stdio.h>

int main()
{
    int basicSalary;
    float HRA, DA, GS;

    printf("Enter your salary: ");
    scanf("%d", &basicSalary);

    if (basicSalary >= 10000 && basicSalary < 20000)
    {
        HRA = basicSalary * 0.2;
        DA = basicSalary * 0.8;
    }
    else if (basicSalary >= 20000 && basicSalary < 30000)
    {
        HRA = basicSalary * 0.25;
        DA = basicSalary * 0.9;
    }
    else if (basicSalary >= 30000)
    {
        HRA = basicSalary * 0.30;
        DA = basicSalary * 0.95;
    }
    else
    {
        HRA = 0;
        DA = 0;
    }

    GS = basicSalary + HRA + DA;
    printf("Gross Salary of Basic Salary %d is %.2f.\n", basicSalary, GS);

    return 0;
}

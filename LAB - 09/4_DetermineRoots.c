#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2, realpart, imaginarypart;
    printf("Enter the coefficients of the quadratic equation (a, b, c): \n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    if (discriminant < 0)
    {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-discriminant) / (2 * a);
        printf("Equation has Complex Roots\n");
        printf("root1 is : %f + %fi \n", realpart, imaginarypart);
        printf("root2 is : %f - %fi", realpart, imaginarypart);
    }
    else if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Equation has Real and Distinct Roots\n");
        printf("root1 is : %f \n", root1);
        printf("root1 is : %f \n", root2);
    }
    else
    {
        root1 = -b / (2 * a);
        root2 = root1;
        printf("Equation has Real and Equal Roots\n");
        printf("root1 is : %f and root2 is : %f ", root1, root2);
    }

    return 0;
}
// Step 1 : Input Cofficient a,b,c.
// Step 2 : Calculate the discriminant using formula : b^2 -4ac
// Step 3 : Check the nature of discriminant
// Step 4 : If discriminant > 0 then roots are real and distinct
            // formula : root1 = (-b + sqrt(discriminant)) / (2*a);
            // formula : root2 = (-b - sqrt(discriminant)) / (2*a);
// Step 5 : If discriminant = 0 then roots are real and equal
            // formula : root1 = root2 = -b / (2 * a);
// Step 6 : If discriminant < 0 then roots are complex
            // formula : realPart = -b / (2 * a);
            // formula : imaginaryPart = sqrt(-discriminant) / (2 * a);
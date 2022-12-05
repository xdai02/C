#include <stdio.h>
#include <math.h>

int main()
{
    double side1, side2, side3;
    printf("Enter three sides of a triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    if(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
    {
        printf("Invalid");
    }
    else
    {
        double p = (side1 + side2 + side3) / 2;
        double area = sqrt(p * (p - side1) * (p - side2) * (p - side3));
        printf("Area = %.2f", area);
    }

    return 0;
}
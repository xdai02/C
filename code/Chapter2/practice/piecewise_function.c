#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double y;

    printf("Enter x: ");
    scanf("%lf", &x);

    if(x < -2)
    {
        y = 0.5 * x + 3;
    }
    else if(x >= -2 && x <= 2)
    {
        y = 0;
    }
    else
    {
        y = pow(4, x);
    }

    printf("y = %.2f\n", y);

    return 0;
}
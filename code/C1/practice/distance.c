#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1;
    double x2, y2;

    printf("Enter point 1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter point 2: ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance = %.2f\n", distance);

    return 0;
}
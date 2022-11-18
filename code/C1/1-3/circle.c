#include <stdio.h>
#include <math.h>

int main()
{
    const double PI = 3.14159;
    double r;
    double area;

    printf("radius: ");
    scanf("%lf", &r);

    area = PI * pow(r, 2);
    printf("area = %.2f\n", area);
    return 0;
}
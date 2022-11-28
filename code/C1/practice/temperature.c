#include <stdio.h>

int main()
{
    double C, F;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &C);

    F = 32 + C * 9 / 5;
    printf("F = 32 + %.2f * 9 / 5 = %.2f\n", C, F);

    return 0;
}
#include <stdio.h>

int main()
{
    int length = 10;
    int width = 5;
    double area;

    area = length * width;
    printf("area = %d * %d = %.2f\n", length, width, area);
    return 0;
}
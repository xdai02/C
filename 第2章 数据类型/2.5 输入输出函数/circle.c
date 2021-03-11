#include <stdio.h>

int main()
{
    double r;       // 半径
    double area;
    const double PI = 3.14159;

    printf("输入半径：");
    scanf("%lf", &r);

    area = PI * r * r;
    printf("面积 = %f\n", area);

    return 0;
}
#include <stdio.h>

int main()
{
    double length, width;
    double area;

    printf("输入长度：");
    scanf("%lf", &length);
    printf("输入宽度：");
    scanf("%lf", &width);

    area = length * width;
    printf("面积 = %.2f\n", area);
    return 0;
}
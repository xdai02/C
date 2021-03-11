#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("输入n：");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }

    printf("%f\n", sum);
    return 0;
}
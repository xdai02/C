#include <stdio.h>

int main()
{
    int num;
    int a, b, c;

    printf("输入一个正三位数：");
    scanf("%d", &num);

    a = num / 100;
    b = num / 10 % 10;
    c = num % 10;

    printf("逆序：%d\n", c*100 + b*10 + a);
    return 0;
}
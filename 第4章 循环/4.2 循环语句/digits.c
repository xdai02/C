#include <stdio.h>

int main()
{
    int num;
    int n = 0;

    printf("输入整数：");
    scanf("%d", &num);

    do
    {
        num /= 10;
        n++;
    } while(num != 0);

    printf("位数：%d\n", n);
    return 0;
}
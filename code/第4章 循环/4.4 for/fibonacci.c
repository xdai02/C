#include <stdio.h>

int main()
{
    int n;
    int num1, num2, val;

    printf("输入斐波那契数列长度：");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("1\n");
    }
    else if(n == 2)
    {
        printf("1, 1\n");
    }
    else
    {
        num1 = 1;
        num2 = 1;
        printf("1, 1");
        for(int i = 3; i <= n; i++)
        {
            val = num1 + num2;
            printf(", %d", val);
            num1 = num2;
            num2 = val;
        }
        printf("\n");
    }
    return 0;
}
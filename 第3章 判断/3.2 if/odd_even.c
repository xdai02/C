#include <stdio.h>

int main()
{
    int num;
    
    printf("输入一个正整数：");
    scanf("%d", &num);

    if(num > 0)
    {
        if(num % 2 == 0)
        {
            printf("%d是偶数\n", num);
        }
        else
        {
            printf("%d是奇数\n", num);
        }
    }

    return 0;
}
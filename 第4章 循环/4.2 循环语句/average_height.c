#include <stdio.h>

int main()
{
    double height;
    double total = 0;
    double average;
    int i = 1;

    while(i <= 5)
    {
        printf("输入第%d个人的身高：", i);
        scanf("%lf", &height);
        total += height;
        i++;
    }

    average = total / 5;
    printf("平均身高：%.2f\n", average);
    
    return 0;
}
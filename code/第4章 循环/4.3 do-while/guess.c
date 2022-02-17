#include <stdio.h>
#include <stdlib.h>     // 标准库
#include <time.h>

int main()
{
    srand(time(NULL));          // 时间种子
    int answer = rand() % 100 + 1;  // 产生1-100之前的随机数
    int num = 0;
    int cnt = 0;

    do
    {
        printf("猜一个1-100之间的数字：");
        scanf("%d", &num);
        cnt++;
        
        if(num > answer)
        {
            printf("猜大了\n");
        }
        else if(num < answer)
        {
            printf("猜小了\n");
        }
    } while(num != answer);
    
    printf("猜对了！你一共用了%d次猜对！\n", cnt);
    return 0;
}
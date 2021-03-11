#include <stdio.h>

int main()
{
    int score = 76;

    if(score >= 90 && score <= 100)
    {
        printf("优秀\n");
    }
    else if(score >= 60)
    {
        printf("合格\n");
    }
    else
    {
        printf("不合格\n");
    }
    return 0;
}
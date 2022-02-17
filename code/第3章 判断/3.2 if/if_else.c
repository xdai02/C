#include <stdio.h>

int main()
{
    int age = 30;
    if(age > 0 && age < 18)
    {
        printf("未成年人\n");
    }
    else
    {
        printf("成年人\n");
    }
    return 0;
}
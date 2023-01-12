#include <stdio.h>

int main()
{
    int n = 10;
    printf("Enter %d integers: ", n);

    int sum_square = 0;
    for(int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        if(num < 0)
        {
            continue;
        }

        sum_square += num * num;
    }

    printf("Sum of squares of positive integers: %d\n", sum_square);

    return 0;
}
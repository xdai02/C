#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            sum += 1.0 / i;
        }
        else
        {
            sum -= 1.0 / i;
        }
    }
    printf("Sum = %.2f\n", sum);

    return 0;
}
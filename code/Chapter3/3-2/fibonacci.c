#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
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
        int num1, num2, val;
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
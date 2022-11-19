#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    bool is_prime = true;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if(is_prime)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
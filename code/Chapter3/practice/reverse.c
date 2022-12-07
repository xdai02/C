#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reverse = 0;
    while(num > 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    printf("Reverse: %d", reverse);
    
    return 0;
}
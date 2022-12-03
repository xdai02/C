#include <stdio.h>

int main()
{
    int num;
    int n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    do
    {
        num /= 10;
        n++;
    } while(num != 0);

    printf("Digits: %d\n", n);
    return 0;
}
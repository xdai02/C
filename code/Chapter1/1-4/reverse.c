#include <stdio.h>

int main()
{
    int num;
    int a, b, c;

    printf("Enter a 3-digit integer: ");
    scanf("%d", &num);

    a = num / 100;
    b = num / 10 % 10;
    c = num % 10;

    printf("Reversed: %d\n", c*100 + b*10 + a);
    return 0;
}
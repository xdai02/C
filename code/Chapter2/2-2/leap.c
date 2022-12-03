#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    /*
     * A year is a leap year if it is
     * 1. exactly divisible by 4, and not divisible by 100;
     * 2. or is exactly divisible by 400
     */
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Common year\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int total;

    printf("Enter total seconds: ");
    scanf("%d", &total);

    int hour = total / 3600;
    int min = total % 3600 / 60;
    int sec = total % 60;

    printf("%d second(s) = %d hour(s) %d minute(s) %d second(s)\n", total, hour, min, sec);

    return 0;
}
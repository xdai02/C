#include <stdio.h>
#define NUM_PEOPLE 5

int main()
{
    double height;
    double total = 0;

    int i = 1;
    while (i <= NUM_PEOPLE)
    {
        printf("Enter person %d's height: ", i);
        scanf("%lf", &height);
        total += height;
        i++;
    }

    double average = total / NUM_PEOPLE;
    printf("Average height: %.2f\n", average);
    return 0;
}
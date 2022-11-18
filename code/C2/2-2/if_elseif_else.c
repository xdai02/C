#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age > 0 && age < 18)
    {
        printf("minor\n");
    }
    else if(age >= 18 && age <= 30)
    {
        printf("yound adult\n");
    }
    else if(age >= 31 && age <= 60)
    {
        printf("middle-aged\n");
    }
    else if(age >= 61 && age <= 120)
    {
        printf("senior\n");
    }
    else
    {
        printf("invalid age\n");
    }
    
    return 0;
}
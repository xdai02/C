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

    return 0;
}
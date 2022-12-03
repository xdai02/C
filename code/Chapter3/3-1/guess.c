#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));          // set random seed

    // generate random number between 1 and 100
    int answer = rand() % 100 + 1;
    int num = 0;
    int cnt = 0;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &num);
        cnt++;
        
        if(num > answer)
        {
            printf("Too large\n");
        }
        else if(num < answer)
        {
            printf("Too small\n");
        }
    } while(num != answer);
    
    printf("Correct! You guessed %d times.\n", cnt);
    return 0;
}
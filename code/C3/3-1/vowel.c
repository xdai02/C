#include <stdio.h>

int main()
{
    char c;
    int vowel = 0;
    int consonant = 0;

    printf("Enter an English sentence: ");

    while ((c = getchar()) != '\n')
    {
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' || 
            c == 'i' || c == 'I' || 
            c == 'o' || c == 'O' || 
            c == 'u' || c == 'U')
        {
            vowel++;
        }
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            consonant++;
        }
    }

    printf("Vowel = %d\n", vowel);
    printf("Consonant = %d\n", consonant);
    return 0;
}
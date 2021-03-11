#include <stdio.h>

int main()
{
    char c;
    int vowel = 0;
    int consonant = 0;

    printf("输入一句英语句子：");

    while((c = getchar()) != '\n')
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vowel++;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            consonant++;
        }
    }

    printf("元音 = %d\n", vowel);
    printf("辅音 = %d\n", consonant);
    return 0;
}
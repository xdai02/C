#include <stdio.h>

/**
 * @brief  自定义字符串复制函数
 * @param  dst[]: 目标字符串
 * @param  src[]: 源字符串
 * @retval None
 */
void myStrcpy(char dst[], char src[]) {
    int i = 0;
    while(src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

int main() {
    char s1[32] = "hello world";
    char s2[32] = "program";

    myStrcpy(s1, s2);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    return 0;
}
#include <stdio.h>

/**
 * @brief  自定义字符串拼接函数
 * @param  dst[]: 目标字符串
 * @param  src[]: 源字符串
 * @retval None
 */
void myStrcat(char dst[], char src[]) {
    int i = 0;
    int j = 0;

    // 找到目标字符串尾部
    while(dst[i] != '\0') {
        i++;
    }

    while(src[j] != '\0') {
        dst[i++] = src[j++];
    }
    dst[i] = '\0';
}

int main() {
    char s1[32] = "hello";
    char s2[32] = "world";

    myStrcat(s1, s2);
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    return 0;
}
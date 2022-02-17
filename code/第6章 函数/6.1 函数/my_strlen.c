#include <stdio.h>

/**
 * @brief  自定义计算字符串长度函数
 * @param  str[]: 待计算字符串
 * @retval 字符串长度
 */
int myStrlen(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char s[32] = "hello world";
    printf("字符串长度 = %d\n", myStrlen(s));
    return 0;
}
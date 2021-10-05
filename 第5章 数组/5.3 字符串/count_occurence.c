#include <stdio.h>

int main() {
    char str[32];       // 字符串
    char c;             // 待统计字符
    int cnt = 0;        // 出现次数
    int i = 0;

    printf("输入字符串：");
    gets(str);
    printf("输入待统计字符：");
    c = getchar();

    while(str[i] != '\0') {
        if(str[i] == c) {
            cnt++;
        }
        i++;
    }

    printf("%c在%s中出现了%d次\n", c, str, cnt);
    return 0;
}
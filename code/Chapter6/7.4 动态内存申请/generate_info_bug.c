#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief  生成一段自我介绍
 * @param  name: 姓名
 * @param  age: 年龄
 * @retval 指定格式字符串：大家好，我叫{name}，今年{age}岁。
 */
char* generateInfo(char *name, int age) {
    char info[128] = "大家好，我叫";
    char age_str[8] = "";
    strcat(info, name);
    strcat(info, "，今年");
    // itoa()函数用于将整数转为字符串
    // 把age以10进制转换为字符串保存到age_str
    strcat(info, itoa(age, age_str, 10));
    strcat(info, "岁。");
    return info;
}

int main() {
    printf("%s\n", generateInfo("极夜酱", 17));
    return 0;
}
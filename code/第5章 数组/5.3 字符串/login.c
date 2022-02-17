/**
 * 缓冲区溢出
 * 用户名输入：[32个任意字符] + [新用户名]
 * 密  码输入：[32个任意字符] + [新密  码]
 * 产生缓冲区溢出，密码被篡改
 * 下一次登录输入新用户名和密码就能实现成功登录
 */
#include <stdio.h>
#include <string.h>

int main() {
    char username[16] = "admin";
    char password[16] = "qwerty";
    char input_username[16];
    char input_password[16];

    while(1) {
        printf("用户名：");
        gets(input_username);
        printf("密  码：");
        gets(input_password);

        if(strcmp(input_username, username) == 0
            && strcmp(input_password, password) == 0) {
            printf("登录成功！\n");
            break;
        } else {
            printf("用户名或密码错误！\n");
        }
    }

    return 0;
}
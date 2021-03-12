#include <stdio.h>

// 函数原型
int max(int num1, int num2);

int main() {
    printf("%d\n", max(4, 12));
    printf("%d\n", max(54, 33));
    printf("%d\n", max(0, -12));
    printf("%d\n", max(-999, -774));
    return 0;
}

// 函数实现
int max(int num1, int num2) {
    // if(num1 > num2) {
    //     return num1;
    // } else {
    //     return num2;
    // }
    
    return num1 > num2 ? num1 : num2;
}
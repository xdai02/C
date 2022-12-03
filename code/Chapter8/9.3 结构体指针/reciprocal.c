#include <stdio.h>
#include <stdlib.h>

// 分数
typedef struct Fraction {
    int numerator;       // 分子
    int denominator;     // 分母
} Fraction;

/**
 * @brief  倒数
 * @note   分母不能为0
 * @param  f: 分数结构体
 * @retval None
 */
void reciprocal(Fraction *f) {
    if(f->numerator == 0) {
        fprintf(stderr, "无法计算倒数\n");
    } else {
        int temp = f->numerator;
        f->numerator = f->denominator;
        f->denominator = temp;
    }
}

int main() {
    Fraction fraction = {2, 5};        // 2/5
    printf("%d/%d的倒数是", fraction.numerator, fraction.denominator);
    reciprocal(&fraction);
    printf("%d/%d\n", fraction.numerator, fraction.denominator);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("班级人数：");
    scanf("%d", &n);

    int *scores = (int *)malloc(sizeof(int) * n);
    if(!scores) {
        fprintf(stderr, "内存申请失败\n");
        exit(1);
    }

    int total = 0;
    for(int i = 0; i < n; i++) {
        printf("第%d个学生成绩：", i+1);
        scanf("%d", &scores[i]);
        total += scores[i];
    }

    printf("平均分：%.2f\n", 1.0 * total / n);
    free(scores);
    return 0;
}
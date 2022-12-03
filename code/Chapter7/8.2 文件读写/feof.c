#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    if(!fp) {
        fprintf(stderr, "File Open Failed\n");
        exit(1);
    }

    char key[32];       // 需查找数据
    char name[32];
    int age;
    bool found = false; // 是否找到

    printf("查找姓名：");
    gets(key);

    while(!feof(fp)) {
        fscanf(fp, "%s\t%d", name, &age);
        if(strcmp(name, key) == 0) {
            printf("%s\t%d\n", name, age);
            found = true;
            break;
        }
    }

    if(!found) {
        printf("未找到【%s】的信息\n", key);
    }

    fclose(fp);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("count_chars_and_lines.c", "r");
    if(!fp) {
        fprintf(stderr, "File Open Failed\n");
        exit(1);
    }

    char c;
    int charNum = 0;        // 字符数量
    int lineNum = 0;        // 行数

    while((c = fgetc(fp)) != EOF) {
        if(c == '\n') {
            lineNum++;
        } else {
            charNum++;
        }
    }

    printf("字符数：%d\n", charNum);
    printf("行  数：%d\n", lineNum);

    fclose(fp);
    return 0;
}
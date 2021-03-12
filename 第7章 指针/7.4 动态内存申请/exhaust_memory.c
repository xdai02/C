#include <stdio.h>
#include <stdlib.h>

int main() {
    void *p;
    int cnt = 0;

    // 每次申请100MB的空间
    while((p = malloc(100 * 1024 * 1024))) {
        cnt++;
    }
    printf("一共分配了%dMB空间\n", cnt*100);
    return 0;
}
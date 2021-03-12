#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    char name[3][12] = {"极夜酱", "小灰", "小白"};
    int age[3] = {17, 22, 19};

    for(int i = 0; i < 3; i++) {
        fprintf(fp, "%s\t%d\n", name[i], age[i]);
    }
    
    fclose(fp);
    return 0;
}
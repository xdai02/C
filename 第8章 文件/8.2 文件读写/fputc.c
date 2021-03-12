#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1 = fopen("fputc.c", "r");
    FILE *fp2 = fopen("data.txt", "w");
    if(!fp1) {
        fprintf(stderr, "File Open Failed\n");
        exit(1);
    }

    char c;
    while((c = fgetc(fp1)) != EOF) {
        fputc(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
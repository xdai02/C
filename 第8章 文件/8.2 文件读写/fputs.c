#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1 = fopen("fputs.c", "r");
    FILE *fp2 = fopen("data.txt", "w");
    if(!fp1) {
        fprintf(stderr, "File Open Failed\n");
        exit(1);
    }

    char line[128];
    while(fgets(line, sizeof(line), fp1)) {
        fputs(line, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
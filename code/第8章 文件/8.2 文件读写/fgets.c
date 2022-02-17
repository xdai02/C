#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("fgets.c", "r");
    if(!fp) {
        fprintf(stderr, "File Open Failed\n");
        exit(1);
    }

    char line[128];
    while(fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
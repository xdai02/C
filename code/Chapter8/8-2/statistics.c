#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("statistics.c", "r");
    if (!fp) {
        fprintf(stderr, "File open failed.\n");
        exit(1);
    }

    int chars = 0;
    int lines = 0;

    while (!feof(fp)) {
        char c = fgetc(fp);
        if (c == '\n') {
            lines++;
        } else {
            chars++;
        }
    }

    printf("Characters: %d\n", chars);
    printf("Lines: %d\n", lines);

    fclose(fp);
    return 0;
}
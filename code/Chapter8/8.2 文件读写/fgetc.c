#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    if(!fp) {
        fprintf(stderr, "File Open Failed\n");
        exit(1);
    }

    char c;
    while((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    
    fclose(fp);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("data3.txt", "r");
    if (!fp) {
        fprintf(stderr, "File open failed.\n");
    }

    char line[128];
    while (fgets(line, sizeof(line), fp) != NULL) {
        char *token = strtok(line, " \t\n");
        while (token != NULL) {
            // remove punctuations
            int i = strlen(token) - 1;
            while (!isalpha(token[i])) {
                i--;
            }
            token[i + 1] = '\0';

            printf("%s\n", token);
            token = strtok(NULL, " \t\n");
        }
    }

    fclose(fp);
    return 0;
}
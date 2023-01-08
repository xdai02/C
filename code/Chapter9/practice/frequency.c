#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "word_list.h"

char *to_lower(char *str) {
    char *p = str;
    while (*p != '\0') {
        *p = tolower(*p);
        p++;
    }
    return str;
}

char *strip(char *str, const char *chars) {
    char *p = str;
    while (*p != '\0' && strchr(chars, *p) != NULL) {
        p++;
    }

    char *q = p + strlen(p) - 1;
    while (q >= p && strchr(chars, *q) != NULL) {
        q--;
    }

    int len = q - p + 1;
    memmove(str, p, len);
    str[len] = '\0';

    return str;
}

int main() {
    const char *PUNCTUATIONS = ",.?!:;\'\"";

    FILE *fp = fopen("text.txt", "r");
    if (!fp) {
        fprintf(stderr, "File open failed.\n");
        exit(1);
    }

    WordList *word_list = create_word_list();

    char line[1024];
    while (fgets(line, sizeof(line), fp) != NULL) {
        char *token = strtok(line, " \t\n");
        while (token != NULL) {
            to_lower(token);
            token = strip(token, PUNCTUATIONS);

            if (strlen(token) > 0) {
                add_word(word_list, token);
            }

            token = strtok(NULL, " \t\n");
        }
    }

    fclose(fp);

    fp = fopen("frequency.csv", "w");
    for (int i = 0; i < word_list->word_count; i++) {
        fprintf(fp, "%s,%d\n", word_list->words[i]->word, word_list->words[i]->count);
    }

    fclose(fp);
    return 0;
}
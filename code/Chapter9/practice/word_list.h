#ifndef _WORD_LIST_H_
#define _WORD_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *word;
    int count;
} Word;

typedef struct {
    Word **words;
    int word_count;
} WordList;

Word *create_word(const char *word);

WordList *create_word_list();

void add_word(WordList *word_list, const char *word);

void destroy_word_list(WordList *word_list);

#endif
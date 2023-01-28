#include "word_list.h"

Word *create_word(const char *word) {
    Word *w = (Word *)malloc(sizeof(Word));
    w->word = (char *)malloc(sizeof(char) * (strlen(word) + 1));
    strcpy(w->word, word);
    w->count = 1;
    return w;
}

WordList *create_word_list() {
    WordList *word_list = (WordList *)malloc(sizeof(WordList));
    word_list->words = NULL;
    word_list->word_count = 0;
    return word_list;
}

void add_word(WordList *word_list, const char *word) {
    for (int i = 0; i < word_list->word_count; i++) {
        if (strcmp(word_list->words[i]->word, word) == 0) {
            word_list->words[i]->count++;
            return;
        }
    }

    word_list->words = (Word **)realloc(word_list->words, sizeof(Word *) * (word_list->word_count + 1));
    word_list->words[word_list->word_count] = create_word(word);
    word_list->word_count++;
}

void destroy_word_list(WordList *word_list) {
    for (int i = 0; i < word_list->word_count; i++) {
        free(word_list->words[i]->word);
        free(word_list->words[i]);
    }
    free(word_list->words);
    free(word_list);
}
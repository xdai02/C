#ifndef _MY_STRING_H_
#define _MY_STRING_H_

#include <stdio.h>

size_t mystrlen(const char *str);

char *mystrcpy(char *dest, const char *src);

char *mystrcat(char *dest, const char *src);

int mystrcmp(const char *str1, const char *str2);

#endif
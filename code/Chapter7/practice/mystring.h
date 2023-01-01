#ifndef __MY_STRING_H__
#define __MY_STRING_H__

#include <stdio.h>

size_t mystrlen(const char *str);

char *mystrcpy(char *dest, const char *src);

char *mystrcat(char *dest, const char *src);

int mystrcmp(const char *str1, const char *str2);

#endif
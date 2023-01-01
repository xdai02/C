#include "mystring.h"

size_t mystrlen(const char *str) {
    size_t len = 0;
    while (*str++ != '\0') {
        len++;
    }
    return len;
}

char *mystrcpy(char *dest, const char *src) {
    char *p = dest;
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

char *mystrcat(char *dest, const char *src) {
    char *p = dest + mystrlen(dest);
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

int mystrcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
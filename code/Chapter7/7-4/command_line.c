#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *lower(char *s) {
    char *p = s;
    while (*p) {
        *p = tolower(*p);
        p++;
    }
    return s;
}

char *upper(char *s) {
    char *p = s;
    while (*p) {
        *p = toupper(*p);
        p++;
    }
    return s;
}

void usage(const char *program) {
    printf("Usage: %s [option] [string]\n", program);
    printf("--lower: convert string to lower case\n");
    printf("--upper: convert string to upper case\n");
}

int main(int argc, char **argv) {
    if (argc != 3) {
        usage(argv[0]);
        return 1;
    }

    char *option = argv[1];
    char *string = argv[2];

    if (strcmp(option, "--lower") == 0) {
        printf("Lower: %s\n", lower(string));
    } else if (strcmp(option, "--upper") == 0) {
        printf("Upper: %s\n", upper(string));
    } else {
        usage(argv[0]);
        return 1;
    }

    return 0;
}
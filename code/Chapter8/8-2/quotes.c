#include <stdio.h>

int main() {
    const char *quotes[] = {
        "Talk is cheap. Show me the code.",
        "Code never lies, comments sometimes do.",
        "Stay Hungry Stay Foolish",
    };
    int n = sizeof(quotes) / sizeof(quotes[0]);

    FILE *fp = fopen("data3.txt", "w");

    for (int i = 0; i < n; i++) {
        fputs(quotes[i], fp);
        fputc('\n', fp);
    }

    fclose(fp);
    return 0;
}
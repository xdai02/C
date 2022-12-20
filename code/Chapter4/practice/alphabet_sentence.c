#include <stdio.h>
#include <stdbool.h>

int main() {
    char sentence[128];
    printf("Sentence: ");
    scanf("%s", sentence);

    int count[26] = {0};
    int i = 0;
    while (sentence[i] != '\0') {
        count[sentence[i] - 'a']++;
        i++;
    }

    bool only_alphabet = true;
    for (int i = 0; i < 26; i++) {
        if (count[i] == 0) {
            only_alphabet = false;
            break;
        }
    }

    if (only_alphabet) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
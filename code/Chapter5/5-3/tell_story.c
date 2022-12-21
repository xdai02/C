#include <stdio.h>
#include <string.h>

void tell_story() {
    char story[1024] = {0};
    strcat(story, "从前有座山，山里有座庙\n");
    strcat(story, "庙里有个老和尚\n");
    strcat(story, "老和尚在对小和尚讲故事：\n");
    printf("%s", story);

    tell_story();
}

int main() {
    tell_story();
    return 0;
}
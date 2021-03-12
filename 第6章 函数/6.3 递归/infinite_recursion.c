#include <stdio.h>

void tellStory() {
    printf("从前有座山\n");
    printf("山里有座庙\n");
    printf("庙里有个老和尚和小和尚\n");
    printf("老和尚在对小和尚讲故事\n");
    printf("他讲的故事是：\n");
    tellStory();
}

int main() {
    tellStory();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    void *p;
    int cnt = 0;

    // allocate 100MB memory each time
    while ((p = malloc(100 * 1024 * 1024))) {
        cnt++;
    }
    printf("Allocated %d MB memory\n", cnt * 100);

    return 0;
}
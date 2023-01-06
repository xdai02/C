#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("data1.txt", "r");
    if (!fp) {
        fprintf(stderr, "File open failed.\n");
        exit(1);
    }

    char id[8];
    double score;
    double sum = 0;
    int n = 0;

    while (fscanf(fp, "ID=%s\tScore=%lf\n", id, &score) != EOF) {
        sum += score;
        n++;
    }
    printf("Average = %.2f\n", sum / n);

    fclose(fp);
    return 0;
}
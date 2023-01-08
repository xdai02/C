#include <stdio.h>

int main() {
    FILE *fp = fopen("data1.txt", "w");
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char id[8];
    double score;
    for (int i = 0; i < n; i++) {
        printf("Enter student %d's ID: ", i + 1);
        scanf("%s", id);
        printf("Enter student %d's score: ", i + 1);
        scanf("%lf", &score);
        fprintf(fp, "ID=%s\tScore=%.2f\n", id, score);
    }

    fclose(fp);
    return 0;
}
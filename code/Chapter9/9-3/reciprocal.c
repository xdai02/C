#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerator;
    int denominator;
} Fraction;

void reciprocal(Fraction *f) {
    if (f->numerator == 0) {
        fprintf(stderr, "Error: Denominator cannot be zero.\n");
        exit(1);
    } else {
        int temp = f->numerator;
        f->numerator = f->denominator;
        f->denominator = temp;
    }
}

int main() {
    Fraction fraction = {2, 5};  // 2/5

    printf("Reciprocal of ");
    printf("%d/%d is ", fraction.numerator, fraction.denominator);
    reciprocal(&fraction);
    printf("%d/%d\n", fraction.numerator, fraction.denominator);

    return 0;
}
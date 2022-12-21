#include <stdio.h>
#include <math.h>

double square(double x) {
    return x * x;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(square(x1 - x2) + square(y1 - y2));
}

int main() {
    double x1, y1, x2, y2;
    printf("Enter (x1, y1): ");
    scanf("%lf%lf", &x1, &y1);
    printf("Enter (x2, y2): ");
    scanf("%lf%lf", &x2, &y2);

    printf("Distance: %.2f\n", distance(x1, y1, x2, y2));

    return 0;
}
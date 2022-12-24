#include <stdio.h>

#define PI 3.14159

double perimeter(double r) {
    return 2 * PI * r;
}

double area(double r) {
    return PI * r * r;
}

int main() {
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Perimeter: %.2f\n", perimeter(radius));
    printf("Area: %.2f\n", area(radius));

    return 0;
}
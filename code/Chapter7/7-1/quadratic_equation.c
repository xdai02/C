#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 * Solve quadratic equation ax^2 + bx + c = 0.
 * @param a coefficient of x^2
 * @param b coefficient of x
 * @param c constant
 * @param x1 pointer to the first root
 * @param x2 pointer to the second root
 * @return true if the equation has real roots, false otherwise.
 */
bool solver(double a, double b, double c, double *x1, double *x2) {
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        return false;
    }
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    return true;
}

int main() {
    double a, b, c;
    double x1, x2;

    printf("Quadratic equation ax^2 + bx + c = 0\n");
    printf("Enter coefficients a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    if (solver(a, b, c, &x1, &x2)) {
        printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else {
        printf("No real roots\n");
    }

    return 0;
}
#include <stdio.h>
#include "geometry.h"

int main() {
    printf("Area of circle: %.2f\n", circle_area(5));
    printf("Area of triangle: %.2f\n", triangle_area(5, 10));
    return 0;
}
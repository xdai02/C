#include "geometry.h"

#define PI 3.1415926

double circle_area(double radius) {
    return PI * radius * radius;
}

double triangle_area(double base, double height) {
    return base * height / 2;
}
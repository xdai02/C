#include <stdio.h>

typedef struct Coordinate {
    double x;
    double y;
} Coordinate;

int main() {
    Coordinate coor;
    coor.x = 3.1;
    coor.y = 2.7;
    printf("(%.1f, %.1f)\n", coor.x, coor.y);
    return 0;
}
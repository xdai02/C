#include "util.h"
#include <math.h>

#define EPSILON 1e-6

double max(double arr[], int n) {
    double max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

double min(double arr[], int n) {
    double min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double sum(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

double average(double arr[], int n) {
    return sum(arr, n) / n;
}

bool double_equal(double num1, double num2) {
    return fabs(num1 - num2) < EPSILON;
}
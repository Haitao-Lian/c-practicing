#include <stdio.h>
double min(double x, double y);
int main() {
    double a = 10.11, b = 10.12;
    printf("the small one: %lf", min(a, b));
    return 0;
}

double min(double x, double y) { return x < y ? x : y; }

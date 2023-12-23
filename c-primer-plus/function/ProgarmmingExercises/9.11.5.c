#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    void larger_of(double *a, double *b);
    double x, y;
    printf("Enter two nums(q to quit): ");
    while (scanf("%lf %lf", &x, &y) == 2) {
        larger_of(&x, &y);
        printf("x = %.2lf\ny = %.2lf\n", x, y);
        printf("\nEnter two nums(q to quit): ");
    }
    printf("Bye...\n");
    return 0;
}

void larger_of(double *a, double *b) { *a > *b ? (*b = *a) : (*a = *b); }

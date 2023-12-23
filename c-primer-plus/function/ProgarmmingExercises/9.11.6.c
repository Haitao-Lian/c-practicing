#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    void sortThree(double *a, double *b, double *c);

    double x, y, z;
    printf("Enter three nums(q to quit):");

    while (scanf("%lf%lf%lf", &x, &y, &z) == 3) {
        sortThree(&x, &y, &z);
        printf("After sorted: %.2lf %.2lf %.2lf\n", x, y, z);
        printf("\nEnter three nums(q to quit):");
    }

    printf("Bye...\n");
    return 0;
}

void sortThree(double *a, double *b, double *c) {
    if (*a > *b) {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
    if (*b > *c) {
        *b = *b + *c;
        *c = *b - *c;
        *b = *b - *c;
    }
    if (*a > *b) {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}

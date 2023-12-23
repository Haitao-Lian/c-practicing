#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c, x1, x2, real, image;
    printf("Enter a, b, c: ");
    scanf("%f,%f,%f", &a, &b, &c);

    float t = b * b - 4 * a * c;

    if (fabs(a) <= 1e-6) {
        printf("This is nor a quadratic\n");
    } else {
        if (fabs(t) <= 1e-6) {
            x1 = ((-b) + sqrt(t)) / 2 * a;
            x2 = ((-b) - sqrt(-1 * t)) / 2 * a;
            printf("x1 = %f, x2 = %f\n", x1, x2);
        } else {
            real = -b / (2 * a);
            image = sqrt(-t) / (2 * a);
            printf("x1 = %8.4f + %8.4fi\n", real, image);
            printf("x2 = %8.4f - %8.4fi\n", real, image);
        }
    }
    return 0;
}

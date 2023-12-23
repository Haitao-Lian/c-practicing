#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.14
#include <math.h>
#include <stdio.h>
int main() {
    float r, height, circumference, circelArea, sphereSArea, sphereV, cylinderV;
    scanf("r=%f, h=%f", &r, &height);

    circumference = 2 * PI * r;
    circelArea = PI * r * r;
    sphereSArea = 4 * PI * r * r;
    sphereV = 3.0 / 4.0 * PI * pow(r, 3);
    cylinderV = PI * r * r * height;

    printf("circumference = %5.2f\n", circumference);
    printf("circelArea = %5.2f\n", circelArea);
    printf("sphereSArea = %5.2f\n", sphereSArea);
    printf("sphereV = %5.2f\n", sphereV);
    printf("cylinderV = %5.2f\n", cylinderV);

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    float c, F;
    printf("Enter a Fahrenheit temperature: ");
    scanf("%f", &F);

    c = 5.0 / 9.0 * (F - 32);
    printf("After converting to degrees Celsius: %5.2f\n", c);
    return 0;
}

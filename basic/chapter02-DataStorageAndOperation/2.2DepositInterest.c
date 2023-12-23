#include <math.h>
#include <stdio.h>
int main() {
    double r0, r1, r2, r3, r5;
    r0 = 0.0072; // season
    r1 = 0.0414; // one year
    r2 = 0.0468; // two years
    r3 = 0.054;  // three years
    r5 = 0.0585; // five years

    double p1 = 1000 * (1 + 5 * r5);
    double p2 = 1000 * (1 + 2 * r2) * (1 + 3 * r3);
    double p3 = 1000 * (1 + 3 * r3) * (1 + 2 * r2);
    double p4 = pow((1 + r1), 5) * 1000;
    double p5 = pow((1 + r0 / 4), 4 * 5) * 1000;

    printf("The plan A: %10.2f\n", p1);
    printf("The plan B: %10.2f\n", p2);
    printf("The plan C: %10.2f\n", p3);
    printf("The plan D: %10.2f\n", p4);
    printf("The plan E: %10.2f\n", p5);

    return 0;
}

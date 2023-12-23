#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double power(double n, int p);
int main() {
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power(positive or negative) to "
           "which\n");
    printf("the numer will be raised. Enter q to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2) {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope u enjoyed this power trip -- bye!\n");
    return 0;
}

double power(double n, int p) {
    double pow = 1;
    if (n != 0) {
        if (p > 0) {
            for (int i = 1; i <= p; i++) {
                pow *= n;
            }
            return pow;
        } else if (p < 0) {
            p *= -1;

            for (int i = 1; i <= p; i++) {
                pow *= n;
            }
            pow = 1.0 / pow;
            return pow;
        } else {
            return 1;
        }
    } else {
        return 0;
    }

    // if (n == 0)
    //     return 0;
    // if (p == 0) {
    //     return 1;
    // } else if (p > 0) {
    //
    //     double pow = 1;
    //
    //     for (int i = 1; i <= p; i++) {
    //         pow *= n;
    //     }
    //     return pow;
    // } else {
    //     double pow = 1;
    //     p *= -1;
    //
    //     for (int i = 1; i <= p; i++) {
    //         pow *= n;
    //     }
    //     pow = 1.0 / pow;
    //     return pow;
    // }
}


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
    if (n != 0) {
        if (p > 0) {
            return n * power(n, --p);
        } else if (p < 0) {
            return (1.0 / n) * power(n, ++p);
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

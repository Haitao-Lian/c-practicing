#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    double I, bonus, bon1, bon2, bon4, bon6, bon10;

    bon1 = 100000 * 0.1;
    bon2 = bon1 + 100000 * 0.075;
    bon4 = bon2 + 100000 * 0.05;
    bon6 = bon4 + 100000 * 0.03;
    bon10 = bon6 + 100000 * 0.015;

    printf("Enter the profit: ");
    scanf("%lf", &I);
    if (I <= 100000) {
        bonus = I * 0.1;
    } else if (I > 100000 && I <= 200000) {
        bonus = bon1 + (I - 100000) * 0.075;
    } else if (I > 200000 && I <= 400000) {
        bonus = bon2 + (I - 200000) * 0.05;
    } else if (I > 400000 && I <= 600000) {
        bonus = bon4 + (I - 400000) * 0.03;
    } else if (I > 600000 && I <= 1000000) {
        bonus = bon6 + (I - 600000) * 0.015;
    } else {
        bonus = bon10 + (I - 1000000) * 0.01;
    }

    printf("%8.2lf\n", bonus);

    // =======================================//
    // ===============Use Switch==============//
    int branch = I / 100000;
    if (branch > 10) {
        branch = 10;
    }

    switch (branch) {
    case 0:
        bonus = I * 0.1;
        break;
    case 1:
        bonus = bon1 + (I - 100000) * 0.075;
        break;
    case 2:
    case 3:
        bonus = bon2 + (I - 200000) * 0.05;
        break;
    case 4:
    case 5:
        bonus = bon4 + (I - 400000) * 0.03;
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        bonus = bon6 + (I - 600000) * 0.015;
        break;
    case 10:
        bonus = bon10 + (I - 1000000) * 0.01;
        break;
    }
    printf("%8.2lf\n", bonus);
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main() { return 0; }

void alter(int *u, int *v) {
    int sum = *u + *v;
    *v = *u - *v;
    *u = sum;
}

void alter1(int *pa, int *pb) {
    *pa += *pb;
    *pb = *pa - 2 * (*pb);
}

#include <stdio.h>

void copy_arr(double *tarr, double *sarr, int len);
void copy_ptr(double *tarr, double *sarr, int len);
void copy_ptrs(double *tarr, double *sarr, double *end);
void pri_arr(double *arr, int len);

int main() {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    pri_arr(target1, 5);
    pri_arr(target2, 5);
    pri_arr(target3, 5);

    return 0;
}

void copy_arr(double *tarr, double *sarr, int len) {
    for (int i = 0; i < len; i++)
        tarr[i] = sarr[i];
}

void copy_ptr(double *tarr, double *sarr, int len) {
    for (int i = 0; i < len; i++) {
        *(tarr++) = *(sarr++);
        // *tarr = *sarr;
        // tarr++;
        // sarr++;
    }
}

void copy_ptrs(double *tarr, double *sarr, double *end) {
    while (sarr <= end) {
        *(tarr++) = *(sarr++);
        // *tarr = *sarr;
        // tarr++;
        // sarr++;
    }
}

void pri_arr(double *arr, int len) {
    printf("\nTraverse arrays:\n");
    for (int i = 0; i < len; i++)
        printf("%5.2f ", arr[i]);
}
#include <stdio.h>
#define SIZE 11

void pri_arr(double *arr, int len);
void reverse_arr(double *arr, int len);
int main() {
    double darr[SIZE] = {8.8, 23.3, 1, 45, 99, 2342.65, 5, 74, 456.1, 90, 49};
    pri_arr(darr, SIZE);
    reverse_arr(darr, SIZE);
    pri_arr(darr, SIZE);

    return 0;
}

void reverse_arr(double *arr, int len) {
    int start = 0, end = len - 1;
    double temp;

    while (start <= end) {
        temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

void pri_arr(double *arr, int len) {
    printf("\nTraverse arrays:\n");
    for (int i = 0; i < len; i++)
        printf("%5.2f ", arr[i]);
}
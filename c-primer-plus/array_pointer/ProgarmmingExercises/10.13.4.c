#include <stdio.h>
#define SIZE 10

int ind_of_max(double *arr, int len);

int main() {
    double iarr[SIZE] = {23.3, 1, 45, 99, 2342.65, 5, 74, 456.1, 90, 49};

    printf("The index of largest num is %d\n", ind_of_max(iarr, SIZE));
    return 0;
}

int ind_of_max(double *arr, int len) {
    int max = 0;

    for (int i = 1; i < len; i++) {
        if (arr[max] < arr[i])
            max = i;
    }

    // double max = arr[1];
    // int index = 0;
    // for (int i = 1; i < len; i++) {
    //     if (max < arr[i]) {
    //         max = arr[i];
    //         index = i;
    //     }
    // }

    return max;
}
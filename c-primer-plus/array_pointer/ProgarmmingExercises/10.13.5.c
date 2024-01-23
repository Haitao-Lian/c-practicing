#include <stdio.h>
#define SIZE 10
double max_diff(double *arr, int len);

int main() {
    double iarr[SIZE] = {23.3, 1, 45, 99, 2342.65, 5, 74, 456.1, 90, 49};

    printf("The difference between the largest and smallest: %4.2f\n",
           max_diff(iarr, SIZE));
    return 0;
}

double max_diff(double *arr, int len) {
    double max = arr[1], min = arr[1];

    for (int i = 1; i < len; i++) {
        if (max < arr[i])
            max = arr[i];
        else if (min > arr[i])
            min = arr[i];
        // if (max < arr[i])
        //     max = arr[i];
        // if (min > arr[i])
        //     min = arr[i];
    }

    return max - min;
}
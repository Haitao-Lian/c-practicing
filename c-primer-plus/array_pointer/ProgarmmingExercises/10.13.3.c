#include <stdio.h>
#define SIZE 10

int max_of_arr(int *arr, int len);

int main() {
    int iarr[SIZE] = {23, 1, 45, 99, 2342, 5, 74, 456, 90, 49};

    printf("The largest value is %d\n", max_of_arr(iarr, SIZE));
    return 0;
}

int max_of_arr(int *arr, int len) {
    int max = arr[1];
    for (int i = 1; i < len; i++) {
        if (max < arr[i])
            max = arr[i];
    }

    return max;
}
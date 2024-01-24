#include <stdio.h>
#define ROWS 3
#define COLS 4

void copy_arr(double* tarr, double* sarr, int len);
void pri_arr(double* arr, int len);

int main()
{
    double darr_2d[ROWS][COLS] = {
        {3.4, 1.2, 6.6, 7.8},
        {6.5, 5.5, 9.0, 2.3},
        {2.9, 9.1, 7.7, 4.1}
    };
    double target[ROWS][COLS];

    for (int rows = 0; rows < ROWS; rows++) {
        copy_arr(target[rows], darr_2d[rows], COLS);
    }

    for (int rows = 0; rows < ROWS; rows++) {
        pri_arr(target[rows], COLS);
    }
    return 0;
}

void copy_arr(double* tarr, double* sarr, int len)
{
    for (int i = 0; i < len; i++)
        tarr[i] = sarr[i];
}

void pri_arr(double* arr, int len)
{
    printf("\nTraverse arrays:\n");
    for (int i = 0; i < len; i++)
        printf("%5.2f ", arr[i]);
}
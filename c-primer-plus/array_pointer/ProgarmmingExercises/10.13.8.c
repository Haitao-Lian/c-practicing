#include <stdio.h>
#define LEN1 7
#define LEN2 3

void copy_arr(double* tarr, double* sarr, int len);
void pri_arr(double* arr, int len);
int main()
{
    double source[LEN1] = { 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9 };
    double target[LEN2];

    copy_arr(target, source + 2, LEN2);
    pri_arr(target, LEN2);

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
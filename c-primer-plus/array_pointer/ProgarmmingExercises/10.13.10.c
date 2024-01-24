#include <stdio.h>
#define SIZE 5

void pri_arr(int* arr, int len);
void sum_arr(int* arr1, int* arr2, int* sum, int len);
int main()
{
    int source1[SIZE] = { 1, 2, 3, 4, 5 };
    int source2[SIZE] = { 5, 4, 3, 2, 1 };
    int target[SIZE];

    sum_arr(source1, source2, target, SIZE);
    pri_arr(target, SIZE);
    return 0;
}

void sum_arr(int* arr1, int* arr2, int* sum, int len)
{
    for (int i = 0; i < len; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
}

void pri_arr(int* arr, int len)
{
    printf("\nTraverse arrays:\n");
    for (int i = 0; i < len; i++)
        printf("%5d ", arr[i]);
}
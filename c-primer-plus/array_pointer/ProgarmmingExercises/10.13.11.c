#include <stdio.h>
#define ROWS 3
#define COLS 5

void show_arr(int (*arr)[COLS], int rows);
void doubing_arr(int (*arr)[COLS], int rows);
int main()
{
    int arr[ROWS][COLS] = {
        { 2,  4,  8,  9, 10},
        { 3,  5,  6, 11, 22},
        {12, 13, 14, 15,  7}
    };
    printf("Original array:\n");
    show_arr(arr, ROWS);
    doubing_arr(arr, ROWS);
    printf("After doubing:\n");
    show_arr(arr, ROWS);

    return 0;
}

void show_arr(int (*arr)[COLS], int rows)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%5d ", arr[i][j]);
        }
        putchar('\n');
    }
}

void doubing_arr(int (*arr)[COLS], int rows)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] *= 2;
        }
    }
}
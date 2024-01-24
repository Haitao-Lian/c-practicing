#include <stdio.h>
#define ROWS 3
#define COLS 5

void store_arr(double (*target)[COLS], int rows);
double aver(double* target, int len);
double aver_all(double (*target)[COLS], int rows);
void show_arr(double (*target)[COLS], int rows);
double max(double (*target)[COLS], int rows);
int main()
{
    double arr[ROWS][COLS];

    printf("Enter three sets of five double numbers each:\n");
    store_arr(arr, ROWS);
    for (int i = 0; i < ROWS; i++) {
        printf("The average of %d set of five values: %lf\n", i, aver(arr[i], COLS));
    }

    printf("The average of all the values: %lf\n", aver_all(arr, ROWS));
    printf("The largest value of the 15 values: %lf\n", max(arr, ROWS));

    show_arr(arr, ROWS);

    return 0;
}

void store_arr(double (*target)[COLS], int rows)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%lf", &target[i][j]);
        }
    }
}

double aver(double* target, int len)
{
    double total = 0.0;
    for (int i = 0; i < len; i++) {
        total += target[i];
    }

    return total / len;
}

double aver_all(double (*target)[COLS], int rows)
{
    int subtot, total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0, subtot = 0; j < COLS; j++)
            subtot += target[i][j];
        total += subtot;
    }
    return total / (rows * COLS);
}

double max(double (*target)[COLS], int rows)
{
    int max = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            if (max < target[i][j])
                max = target[i][j];
        }
    }

    return max;
}

void show_arr(double (*target)[COLS], int rows)
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%6.2f ", target[i][j]);
        }
        putchar('\n');
    }
}
#include <stdio.h>
#define SIZE 10
long sum(int arr[], int n);
long sump(int *start, int *end);
int main() {
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer, answer1;

    answer = sum(marbles, SIZE);
    answer1 = sump(marbles, marbles + SIZE);

    printf("1. total number: %ld\n", answer);
    // printf("p of total 1 = %p\n", &answer);
    printf("2. total number: %ld\n", answer1);
    // printf("p of total 2 = %p\n", &answer1);

    return 0;
}

long sum(int arr[], int n) {
    int i;
    long total = 0;

    for (i = 0; i < SIZE; i++) {
        total += arr[i];
    }

    return total;
}

long sump(int *start, int *end) {
    int total = 0;

    printf("address of start: %p\n", start);
    while (start < end) {
        total += *start++;
    }
    // printf("address of end:   %p\n", end);
    // printf("start-2 = %d\n", *(start-2));
    // printf("start-1 = %d\n", *(start-1));
    // printf("start = %d\n", *start);
    // printf("start + 1 = %p\n", start+1);
    // printf("start+1 = %d\n", *(start+1));
    // printf("start = %d\n", start[0]);
    // printf("start + 2 = %p\n", start+2);
    // printf("start+2 = %d\n", *(start+2));

    return total;
}

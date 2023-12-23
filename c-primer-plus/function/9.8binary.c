#define _CRT_SECURE_NO_WARNINGS 1

void to_binary(int n);

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%d", &num) == 1) {
        printf("Binary equivalent: ");
        to_binary(num);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_binary(int n) {
    int r;
    r = n % 2;

    if (n >= 2) {
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
}

#define _CRT_SECURE_NO_WARNINGS 1

void to_binary_n(int n, int base);

#include <stdio.h>
int main() {
    int num, base;
    printf("Enter an integer and the base from 2 to 10(q to quit): ");
    while (scanf("%d%d", &num, &base) == 2) {
        printf("Equivalent number on the base of %u: ", base);
        to_binary_n(num, base);
        printf("\nEnter nex pair of numbers or q to quit: ");
    }

    printf("Bye...\n");

    return 0;
}

void to_binary_n(int n, int base) {
    int r;
    r = n % base;

    if (n >= base) {
        to_binary_n(n / base, base);
    }
    putchar('0' + r);
    return;
}

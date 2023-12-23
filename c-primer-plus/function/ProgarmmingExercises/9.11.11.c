#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Fibonacci(int n);
int main() {
    int count;
    printf("Enter the length of Fibonacci(q to quit): ");
    while (scanf("%d", &count) == 1) {
        Fibonacci(count);
        printf("\nEnter the length of Fibonacci(q to quit): ");
    }
    printf("Bye...\n");
    return 0;
}

void Fibonacci(int n) {
    int a1 = 1, a2 = 1, a3;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a1);
        } else if (i == 2) {
            printf("%d ", a2);
        } else {
            a3 = a1 + a2;
            printf("%d ", a3);
            a1 = a2;
            a2 = a3;
        }
    }
}

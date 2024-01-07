#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    // a test
    double scores[10], sum = 0;
    printf("Enter ten scores(use space to split): ");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &scores[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("The score of %d is %.2lf\n", i + 1, scores[i]);
        sum += scores[i];
    }

    printf("summary = %.2lf \naver = %.4lf \n", sum, sum / 10.0);
    return 0;
}

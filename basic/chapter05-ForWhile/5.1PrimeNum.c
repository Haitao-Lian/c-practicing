#include <math.h>
#include <stdio.h>
int main() {
    // u is used for line breaks; count is used to calculate the number of loops
    int i, n = 0, count = 0;
    for (i = 3; i <= 1000; i = i + 2) {
        int isFlag = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            count++;
            if (i % j == 0) {
                isFlag = 0;
                break;
            }
        }
        if (isFlag) {
            printf("%d\t", i);
            n++;
            if (n % 4 == 0) {
                printf("\n");
            }
        }
    }
    printf("\n");
    // count + 1 for "2"
    printf("the number of loops: %d\n", count + 1);

    return 0;
}

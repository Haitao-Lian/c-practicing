#include <stdio.h>
int main()
{
    int a, b;
    for (a = 1, b = 1; a <= 100; a++) {
        printf("b = %d\n", b);
        if (b >= 20) {
            break;
        }
        printf("a = %d\n", a);
        printf("======\n");
        if (b % 3 == 1) {
            b += 3;
            continue;
        }
        b -= 5;
    }
    printf("%d\n", a);
    return 0;
}

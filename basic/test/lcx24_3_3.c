#include <stdio.h>
int main()
{
    int x, y, z, c;
    scanf("%d, %d, %d\n", &x, &y, &z);
    if (x > y) {
        c = x;
        x = y;
        y = c;
    }
    if (x > z) {
        c = x;
        x = z;
        z = c;
    }

    if (y > z) {
        c = y;
        y = z;
        z = c;
    }

    printf("%d<%d<%d\n", x, y, z);
    return 0;
}
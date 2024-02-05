#include <stdio.h>

int main()
{
    int count = 0, i;

    for (i = 0; i < 999; i += 11) {
        int unit    = i % 10;
        int ten     = i / 10 % 10;
        int hundred = i / 100;
        if (unit != ten && unit != hundred && ten != hundred && i % 11 == 0) {
            count++;
            printf("%d ", i);
        }
    }
    printf("\nThe count = %d\n", count);

    return 0;
}
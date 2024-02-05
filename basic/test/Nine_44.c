#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][100];
    int index, len, lastlen = 0;

    for (int i = 0; i < 5; i++) {
        gets(str[i]);
        len = strlen(str[i]);
        if (lastlen < len) {
            lastlen = len;
            index   = i;
        }
    }
    printf("The largest string: %s\n", str[index]);

    return 0;
}
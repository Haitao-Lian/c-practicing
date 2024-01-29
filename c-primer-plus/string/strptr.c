#include <stdio.h>

int main()
{
    // printf("%p %p %c %c", "we", "we" + 1, *"happy", *("happy" + 1));
    printf("%s, %p, %c\n", "We", "are", *"space farers");

    char str[10];
    printf("Ente a string:\n");
    // gets(str); // unsafe!
    puts(str);

    return 0;
}
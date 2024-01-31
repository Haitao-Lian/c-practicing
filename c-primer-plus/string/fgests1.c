#include <stdio.h>
#define STLEN 14

int main()
{
    char words[STLEN];

    puts("Enter a string, please:"); // 自动打印回车
    fgets(words, STLEN, stdin); // 读入一个回车，并停止读入。

    printf("Your string twice (puts(), then fputs()):\n");
    puts(words); // 会补上一个回车
    fputs(words, stdout); // 不会不上回车

    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);

    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");

    return 0;
}

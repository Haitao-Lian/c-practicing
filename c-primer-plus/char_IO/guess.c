#include <stdio.h>

int main()
{
    int guess = 1;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    char response;

    while ((response = getchar() != 'y')) {
        if (response == 'n')
            printf("Well, then, is it %d\n", ++guess);
        else
            printf("Sorry, I understand only y or n.\n");
        while (getchar() != '\n') {
            continue;
        }
    }

    // while (getchar() != 'y') {
    //     printf("Well, then, is it %d?\n", ++guess);
    //     /* 丢弃首字母之后的内容 */
    //     while (getchar() != '\n')
    //         continue;
    // }

    // while (getchar() != 'y') {
    //     printf("Well, then, is it %d?\n", ++guess);
    // }
    printf("I knew I could do it!\n");
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int num;
    printf("Enter a positive integer with no more than 5 digits: ");
    scanf("%d", &num);

    int places;

    if (num > 9999) {
        places = 5;
        printf("It's a five-digit number\n");
    } else if (num > 999) {
        places = 4;
        printf("It's a four-digit number\n");
    } else if (num > 99) {
        places = 3;
        printf("It's a three-digit number\n");
    } else if (num > 9) {
        places = 2;
        printf("It's a two-digit number\n");
    } else {
        places = 1;
        printf("It's a one-digit number\n");
    }

    int individual = num % 10;
    int ten = num % 100 / 10;
    int hundred = num % 1000 / 100;
    int thousand = num % 10000 / 1000;
    int tenThousand = num / 10000;
    printf("The individual of num is %d.\n", individual);
    printf("The ten of num is %d.\n", ten);
    printf("The hundred of num is %d.\n", hundred);
    printf("The thousand of num is %d.\n", thousand);
    printf("The tenThousand of num is %d.\n", tenThousand);

    switch (places) {
    case 5:
        printf("%d%d%d%d%d\n", individual, ten, hundred, thousand, tenThousand);
        break;
    case 4:
        printf("%d%d%d%d\n", individual, ten, hundred, thousand);
        break;
    case 3:
        printf("%d%d%d\n", individual, ten, hundred);
        break;
    case 2:
        printf("%d%d\n", individual, ten);
        break;
    case 1:
        printf("%d\n", individual);
        break;
    }

    return 0;
}

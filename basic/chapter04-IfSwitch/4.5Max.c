#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(){
    int a, b ,c;
    int max;

    printf("Enter three integaers:\n");
    scanf("%d%d%d", &a, &b,&c);
    // if (a >= b) {
    //     max = a;
    // }else {
    //     max= b;
    // }
    // if (max < c ) {
        // max = c;
    // }
    max = a > b ? a : b;
    max = c > max ? c : max;


    printf("The max is: %d\n", max);
    return 0;
}

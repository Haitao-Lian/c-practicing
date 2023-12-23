#include <stdio.h>
int main() {
    char A, B, C;
    for (A = 'X'; A <= 'Z'; A++) {
        for (B = 'X'; B <= 'Z'; B++) {
            if (A != B) {
                for (C = 'X'; C <= 'Z'; C++) {
                    if (A != C && B != C && A != 'X' && C != 'X' && C != 'Z') {
                        printf(" A - %c \n B - %c \n C - %c \n", A, B, C);
                    }
                }
            }
        }
    }
    return 0;
}

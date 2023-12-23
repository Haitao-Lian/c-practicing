#include <stdio.h>
int main() {
    int peaches = 1;
    for (int i = 0; i < 9; i++) {
        peaches = (peaches + 1) * 2;
    }
    printf("peaches = %d\n", peaches);
    return 0;
}

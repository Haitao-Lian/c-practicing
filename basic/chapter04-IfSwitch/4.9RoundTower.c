#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
int main() {
    float x, y;
    int l;

    printf("Enter the coordinates of the building: ");
    scanf("(%f,%f)", &x, &y);
    if (x >= 0) {
        if (y >= 0) {
            l = pow((x - 2), 2) + pow((y - 2), 2);
        } else {
            l = pow((x - 2), 2) + pow((y + 2), 2);
        }
    } else {
        if (y >= 0) {
            l = pow((x + 2), 2) + pow((y - 2), 2);
        } else {
            l = pow((x + 2), 2) + pow((y + 2), 2);
        }
    }

    if (l > 1) {
        printf("height of building: 0m\n");
    } else {
        printf("height of building: 10m\n");
    }
    return 0;
}

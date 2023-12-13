#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void interface();
int getchioce(int low, int high);
int main() {
    int res;
    interface();
    while ((res = getchioce(1, 4)) != 4) {
        printf("I like choice %d.\n", res);
        interface();
    }

    printf("Bye...\n");
    return 0;
}

void interface() {
    printf("Please choose one of the following:\n");
    printf("1) copy files\t\t2)move files\n");
    printf("2) remove files\t\t4)quit\n");
    printf("Enter the number of your choice: ");
}

int getchioce(int low, int high) {
    int choice;
    int right;

    right = scanf("%d", &choice);
    while (right == 1 && (choice < low || choice > high)) {
        printf("%d is not a valid choice; try again\n", choice);
        interface();
        right = scanf("%d", &choice);
    }

    if (right != 1) {
        printf("Non-numeric input.\n");
        choice = 4;
    }
    return choice;
}

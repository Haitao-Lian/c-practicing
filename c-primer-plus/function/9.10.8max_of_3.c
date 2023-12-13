#include <stdio.h>
int imax(int, int, int);
int main() {
  printf("%d\n", imax(9, 1, 3));
  printf("%d\n", imax(15, 51, 3));
  printf("%d\n", imax(15, 51, 93));
  return 0;
}

int imax(int a, int b, int c) {
  int max = a > b ? a : b;
  return max = max > c ? max : c;
}

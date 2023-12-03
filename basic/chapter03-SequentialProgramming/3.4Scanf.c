#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
  int a, b;
  char c1, c2;
  float x, y, z;

  scanf("%5d%5d%c%c%f%f%*f,%f", &a, &b, &c1, &c2, &x, &y, &z);
  printf("a = %d, b = %d\n", a, b);
  printf("c1 = %c, c2 = %c\n", c1, c2);
  printf("x = %f, y = %f, z = %f\n", x, y, z);
  return 0;
}

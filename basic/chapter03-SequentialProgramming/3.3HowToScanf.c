#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
  int a, b;
  float x, y;
  char c1, c2;

  scanf("a=%d b=%d", &a, &b);
  scanf(" %f %e", &x, &y);
  scanf("%c %c", &c1, &c2);

  printf("a = %d, b = %d\n", a, b);
  printf("x = %4.2f, y = %4.2f\n", x, y);
  printf("c1 = %c, c2 = %c\n", c1, c2);

  return 0;
}

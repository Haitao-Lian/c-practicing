#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
int main() {
  double x, y;

  double harAver(double a, double b);
  printf("Input two nums(q to quit): ");
  while (scanf("%lf %lf", &x, &y) == 2) {
    printf("The result is: %lf\n", harAver(x, y));
    printf("\nInput two nums(q to quit): ");
  }
  printf("Bys...\n");
  return 0;
}

double harAver(double a, double b) {
  return pow((pow(a, -1) + pow(b, -1)) / 2, -1);
}

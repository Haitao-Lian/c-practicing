#include <math.h>
#include <stdio.h>
int main() {
  double r = 0.1;
  int n = 10;
  double P = pow(1 + r, n);

  printf("GDP will increase by %.2f%% after ten years\n", P);
  return 0;
}

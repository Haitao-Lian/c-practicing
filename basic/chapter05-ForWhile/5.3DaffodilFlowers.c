#include <math.h>
#include <stdio.h>
int main() {
  int DaNum = 100, unit, tens, hundreds;
  for (; DaNum <= 999; DaNum++) {
    unit = DaNum % 10;
    tens = DaNum / 10 % 10;
    hundreds = DaNum / 100;

    if (DaNum == (pow(unit, 3) + pow(tens, 3) + pow(hundreds, 3))) {
      printf("%d ", DaNum);
    }
  }
  printf("\n");
  return 0;
}

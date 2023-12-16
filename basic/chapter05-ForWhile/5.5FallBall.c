#include <stdio.h>
int main() {
  double height = 100, distance;

  // except the first time, must add two distances: falling and bouncing
  distance += height;
  for (int i = 0; i < 10; i++) {
    height /= 2;
    distance = distance + height * 2;
  }

  printf("distance: %lf\n", distance);
  printf("after 10 times fall: %lf\n", height);
  return 0;
}

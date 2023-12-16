#include <stdio.h>
int main() {
  for (int i = 1; i <= 4; i++) {
    for (int j = 4 - i; j > 0; j--) {
      printf(" ");
    }
    for (int k = 1; k <= 2 * i - 1; k++) {
      printf("*");
    }
    printf("\n");
  }
  // line for proofreading
  // printf("=======\n");

  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= i; j++) {
      printf(" ");
    }
    for (int k = 1; k <= 7 - 2 * i; k++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

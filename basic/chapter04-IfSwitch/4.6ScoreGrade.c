#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
  float score;
  int grade;
  printf("Enter a score: ");
  scanf("%f", &score);

  // grade = (int)score / 10;
  // switch (grade) {
  switch ((int)score / 10) {
  case 10:
  case 9:
    printf("A\n");
    break;
  case 8:
    printf("B\n");
    break;
  case 7:
    printf("C\n");
    break;
  case 6:
    printf("D\n");
    break;
  default:
    printf("E\n");
    break;
  }
  return 0;
}

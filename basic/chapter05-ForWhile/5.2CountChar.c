#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
  int enCount = 0, spaceCount = 0, numCount = 0, otherCount = 0;
  char c;

  printf("Enter a line of chars: ");
  while ((c = getchar()) != '\n') {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      enCount++;
    } else if (c == ' ') {
      spaceCount++;
    } else if (c >= '0' && c <= '9') {
      numCount++;
    } else {
      otherCount++;
    }
  }

  printf("enCount = %d\n", enCount);
  printf("spaceCount = %d\n", spaceCount);
  printf("numCount = %d\n", numCount);
  printf("otherCount = %d\n", otherCount);
  return 0;
}

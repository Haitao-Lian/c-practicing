#define _CRT_SECURE_NO_WARNINGS 1
#include <ctype.h>
#include <stdio.h>
int main() {
  int get_ch(int c);
  char ch;

  printf("Enter a string: ");
  while ((ch = getchar()) != EOF) {
    printf("%d ", get_ch(ch));
  }
  return 0;
}

int get_ch(int c) {
  if (isalpha(c)) {
    return toupper(c) - 64;
  } else {
    return -1;
  }
}

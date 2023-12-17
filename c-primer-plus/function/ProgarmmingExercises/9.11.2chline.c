#include <stdio.h>
int main() {
  void chline(char ch, int i, int j);
  chline('?', 3, 5);
  return 0;
}

void chline(char ch, int i, int j) {
  for (int x = 1; x <= j; x++) {
    for (int y = 1; y <= i; y++) {
      printf("%c", ch);
    }
    printf("\n");
  }
}

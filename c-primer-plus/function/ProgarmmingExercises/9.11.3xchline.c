#include <stdio.h>
int main(){
void xchline(char ch, int i, int j);
    xchline('&', 1, 5);
    return 0;
}

void xchline(char ch, int i, int j) {
  for (int x = 1; x <= j; x++) {
    for (int y = 1; y <= i; y++) {
      printf("%c", ch);
    }
    printf("\n");
  }
}

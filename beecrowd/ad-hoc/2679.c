#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  printf("%d\n", (x % 2 == 0) ? x + 2 : x + 1);
  return 0;
}
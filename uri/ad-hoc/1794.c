#include <stdio.h>

int main() {
  int x;
  int la, lb;
  int sa, sb;
  scanf("%d", &x);
  scanf("%d %d", &la, &lb);
  scanf("%d %d", &sa, &sb);
  printf("%s\n", (x >= la && x <= lb && x >= sa && x <= sb) ? "possivel" : "impossivel");
  return 0;
}
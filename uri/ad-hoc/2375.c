#include <stdio.h>


int main() {
  int d, a, l, p;
  scanf("%d %d %d %d", &d, &a, &l, &p);
  printf("%c\n", (d <= a && d <= l && d <= p) ? 'S' : 'N');
  return 0;
}
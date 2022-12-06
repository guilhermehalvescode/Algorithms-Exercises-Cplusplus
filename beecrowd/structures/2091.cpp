#include <bits/stdc++.h>
#define MAX 1000000001000
using namespace std;

typedef unsigned long long int llu;

int main() {
  llu num, bits;
  int n;
  while(true) {
    scanf("%d", &n);
    if(!n) return 0;
    memset(&bits, 0, sizeof(bits));
    while(n--) {
      scanf("%llu", &num);
      bits = bits ^ ((llu) 1 << (num - 1));
    }
    printf("%d\n", (int) (log2(bits) + 1));
  }

  return 0;
}
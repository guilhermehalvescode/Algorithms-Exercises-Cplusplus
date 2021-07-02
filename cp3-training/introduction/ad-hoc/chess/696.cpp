#include <bits/stdc++.h>

using namespace std;

int knight(int m, int n) {
  if(m == 0 || n == 0) 
    return 0;
  else if(m == 1 || n == 1) 
    return max(m, n);
  else if(m == 2 || n == 2) {
    int c = (max(m, n) / 4) * 4;
    if (max(m, n) % 4 == 1) {
      c += 2;
    }
    else if (max(m, n) % 4 > 1) {
      c += 4;
    }
    return c;
  } else return (int) ceil((m * n) / 2.0);
}


int main() {
  int m, n;
  while(true) {
    cin >> m >> n;
    if(!m && !n) return 0;
    printf("%d knights may be placed on a %d row %d column board.\n", knight(m, n), m, n); 
  }

  return 0;
}
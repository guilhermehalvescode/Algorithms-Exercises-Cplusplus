#include <bits/stdc++.h>
#define N 101


using namespace std;
int n, m, comp[N], ncomp, rk[N];

void init() {
  ncomp = n;
  for(int i = 1; i <= n; i++) {
    comp[i] = i;
    rk[i] = 1;
  }
}

int find(int a) {
  return comp[a] == a ? a : comp[a] = find(comp[a]);
}

void join(int a, int b) {
  int x = find(a);
  int y = find(b);
  if(x == y) return;

  if(rk[x] < rk[y]) swap(x, y);

  comp[y] = x;
  rk[x] += rk[y];
  ncomp--;
}

int main() {
  int tests; cin >> tests;

  for(int j = 0; j < tests; j++) {
    cin >> n >> m;
    init();
    for(int i = 0; i < m; i++) {
      int a, b;
      cin >> a >> b;
      join(a, b);
    }
    cout << "Caso #" << j + 1 << ": ";
    if(ncomp == 1) {
      cout << "a promessa foi cumprida";
    } else {
      cout << "ainda falta(m) " << ncomp - 1 << " estradas(s)";
    }
    cout << endl;
  }

  return 0;
}
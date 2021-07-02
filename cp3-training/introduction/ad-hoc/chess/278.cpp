#include <bits/stdc++.h>

using namespace std;

int king(int m, int n) {
  return (int) (floor((m + 1)/2) * floor((n + 1)/2)); 
}

int rook(int m, int n) {
  return min(m, n);
}

int queen(int m, int n) {
  return min(m, n);
}

int knight(int m, int n) {
  return (int) ceil((m * n) / 2.0);
}

int main() {
  int t, m, n, res; cin >> t;
  char c;
  while(t--) {
    cin >> c >> m >> n;
    switch (c) {
      case 'r':
        res = rook(m, n);
        break;
      case 'k':
        res = knight(m, n);
        break;
      case 'Q':
        res = queen(m, n);
        break;
      case 'K':
        res = king(m, n);
        break;
      default:
        break;
    }
    cout << res << endl;
  }
}
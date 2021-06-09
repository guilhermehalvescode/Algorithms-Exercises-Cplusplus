#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  int cases = 1;
  while(t--) {
    int v[3];
    cin >> v[0] >> v[1] >> v[2];
    sort(v, v + 3);
    printf("Case %d: %d\n", cases++, v[1]);
  }
  return 0;
}
#include <bits/stdc++.h>

#define N 5*10101

using namespace std;

int n, m, familias[N], nfamilias, members[N];


void init() {
  nfamilias = n;
  for(int i = 1; i <=  n; i++) {
    familias[i] = i;
    members[i] = 1;
  }
}

int find(int a) {
  return familias[a] == a ? a : familias[a] = find(familias[a]);
}


void join(int a, int b) {
  int x = find(a);
  int y = find(b);
  if(x == y) return;

  if(members[x] < members[y]) swap(x, y);

  familias[y] = x;
  members[x] += members[y];
  nfamilias--;
}


int main() {
  cin >> n >> m;
  init();
  while(m--) {
    int a, b;
    cin >> a >> b;
    join(a, b);
  }
  cout << nfamilias << endl;

  return 0;
}
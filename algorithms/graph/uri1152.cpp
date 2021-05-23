#include <bits/stdc++.h>
#define N 2 * 101010

using namespace std;

typedef long long unsigned int llu;
typedef pair<llu, pair<int, int>> iii;
int n, m, junctions[N];
vector <iii> estradas;

void init() {
  estradas.clear();
  for(int i = 0; i < n; i++) {
    junctions[i] = i;
  }
}


int find(int a) {
  return junctions[a] == a ? a : junctions[a] = find(junctions[a]);
}

void join(int a, int b) {
  junctions[find(a)] = find(b);
}

llu kruskal() {
  sort(estradas.begin(), estradas.end());
  llu custoMinimo = 0;
  for(iii edge : estradas) {
    llu metros = edge.first;
    int u = edge.second.first;
    int v = edge.second.second;
    if(find(u) == find(v)) continue;
    custoMinimo += metros;
    join(u, v);
  }
  return custoMinimo;
}

int main() {
  while(true) {
    cin >> n >> m;
    if(!n && !m) break;
    llu custoTotal = 0;
    init();
    for(int i = 0; i < m; i++) {
      llu z;
      int x, y;
      cin >> x >> y >> z;
      estradas.push_back({z, {x, y}});
      custoTotal += z;
    }
    cout << custoTotal - kruskal() << endl;
  }
  return 0;
}
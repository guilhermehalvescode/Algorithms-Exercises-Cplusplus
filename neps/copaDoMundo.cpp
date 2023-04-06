#include <bits/stdc++.h>
#define MAX 110
using namespace std;

typedef pair<int, int> ii;


int pai[MAX], peso[MAX], n, f, r;
vector<pair<int, ii>> ferrovias, rodovias;

int find(int u) {
  if(pai[u] == u)
    return u;

  return pai[u] = find(pai[u]);
}


void join(int u, int v) {
  int x = find(u), y = find(v);

  if(x == y)
    return;

  if(peso[x] < peso[y]) {
    pai[x] = y;
  }

  if(peso[y] < peso[x]) {
    pai[y] = x;
  }

  if(peso[x] == peso[y]) {
    pai[x] = y;
    peso[y]++;
  }

}

void init() {
  for(int i = 0; i <= n; i++) {
    pai[i] = i;
    peso[i] = 0;
  }

  sort(ferrovias.begin(), ferrovias.end());
  sort(rodovias.begin(), rodovias.end());
}

int kruskal() {
  init();

  int pesoMin = 0;

  for(auto a : ferrovias) {
    int custo = a.first;
    ii aresta = a.second;

    if(find(aresta.first) != find(aresta.second)) {
      join(aresta.first, aresta.second);
      pesoMin += custo;
    }
  }

  for(auto a : rodovias) {
    int custo = a.first;
    ii aresta = a.second;

    if(find(aresta.first) != find(aresta.second)) {
      join(aresta.first, aresta.second);
      pesoMin += custo;
    }
  }

  return pesoMin;
}

int main() {
  cin >> n >> f >> r;

  for(int i = 0; i < f; i++) {
    int x, y, c;

    cin >> x >> y >> c;

    ferrovias.push_back(make_pair(c, ii(x, y)));
  }

  for(int i = 0; i < r; i++) {
    int x, y, c;

    cin >> x >> y >> c;

    rodovias.push_back(make_pair(c, ii(x, y)));
  }

  cout << kruskal() << endl;
  return 0;
}
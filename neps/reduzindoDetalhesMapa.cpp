#include <bits/stdc++.h>
#define MAX 600

using namespace std;
typedef pair<int, int> ii;

int pai[MAX], peso[MAX];

vector<pair<int, ii>> arestas;


int find(int u) {
  if(pai[u] == u)
    return u;
  return pai[u] = find(pai[u]);
}

void join(int u, int v) {
  int x = find(u), y = find(v);

  if(x == y)
    return;

  if(peso[x] > peso[y]) {
    pai[y] = x;
  } else if(peso[x] < peso[y]) {
    pai[x] = y;
  } else {
    pai[x] = y;
    peso[y]++;
  }

}


int kruskal() {
  for(int i = 0; i < MAX; i++) {
    pai[i] = i;
    peso[i] = 0;
  }

  int pesoMin = 0;

  for(auto aresta : arestas) {
    int peso = aresta.first;
    ii vertices = aresta.second;
    if(find(vertices.first) != find(vertices.second)) {
      join(vertices.first, vertices.second);
      pesoMin += peso;
    }
  }

  return pesoMin;
}


int main() {
  int n, m;
  cin >> n >> m;



  for(int i = 0; i < m; i++) {
    int u, v, c;

    cin >> u >> v >> c;

    arestas.push_back(make_pair(c, ii(u, v)));
  }

  sort(arestas.begin(), arestas.end());


  cout << kruskal() << endl;


  return 0;
}
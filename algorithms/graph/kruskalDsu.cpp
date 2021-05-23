#include <bits/stdc++.h>
#define N 101010


using namespace std;

typedef pair<int, pair<int, int>> iii;

int n, m, comp[N];
//edges list
vector<iii> listaArestas;


void init() {
  listaArestas.clear();
  for(int i = 1; i < n; i++) {
    comp[i] = i;
  }
}

int find(int a) {
  return comp[a] == a ? a : comp[a] = find(comp[a]);
}

void join(int a, int b) {
  comp[find(a)] = find(b);
}

//retorna peso da MST
int kruskal() {
  sort(listaArestas.begin(), listaArestas.end());
  int mstCost = 0;
  for(iii edge : listaArestas) {
    int custo = edge.first;
    pair<int, int> aresta = edge.second;
    if(find(aresta.first) == find(aresta.second)) continue;
    join(aresta.first, aresta.second);
    mstCost += custo;
  }

  return mstCost;
}

int main() {
  cin >> n >> m;
  init();
  for(int i = 0; i < m; i++) {
    int a, b, c; //a conecta em b, com peso c
    cin >> a >> b >> c;
    listaArestas.push_back(iii(c, {a, b}));
  }
  cout << "Custo MST: " << kruskal() << endl;
  return 0;
}
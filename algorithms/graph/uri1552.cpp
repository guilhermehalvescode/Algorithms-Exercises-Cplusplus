#include <bits/stdc++.h>
#define N 510
using namespace std;

typedef pair<double, double> ii;
typedef pair<double, ii> iii;

int n, comp[N];
ii coordenadasPessoas[N];
vector<iii> arestas;


void init() {
  arestas.clear();
  for(int i = 0; i < n; i++) {
    coordenadasPessoas[i] = {0, 0};
    comp[i] = i;
  }
}

double dist(int i, int j) {
  ii p1 = coordenadasPessoas[i];
  ii p2 = coordenadasPessoas[j];
  double x1 = p1.first, y1 = p1.second;
  double x2 = p2.first, y2 = p2.second;
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void geraArestas() {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i != j) {
        arestas.push_back({dist(i, j), {i, j}}); // faz arestas entre cada pessoa com a distancia
      }
    }
  }
}

int find(int a) {
  return comp[a] == a ? a : comp[a] = find(comp[a]);
}

void join(int a, int b) {
  comp[find(a)] = find(b);
}

double kruskal() {
  sort(arestas.begin(), arestas.end());
  double mst = 0;
  for(iii edge : arestas) {
    ii aresta = edge.second;
    double peso = edge.first;
    if(find(aresta.first) == find(aresta.second)) continue;
    mst += peso;
    join(aresta.first, aresta.second);
  }

  return mst;
}

int main () {
  int cases; cin >> cases;
  while(cases--) {
    cin >> n;
    init();
    for(int i = 0; i < n; i++) {
      double x, y; cin >> x >> y;
      coordenadasPessoas[i] = {x, y};
    }
    geraArestas();
    printf("%.2lf\n", kruskal()/100);
  }
  return 0;
}
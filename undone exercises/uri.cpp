#include <bits/stdc++.h>
#define N 250
#define inf 10101010
using namespace std;

typedef pair<int, int> ii;

int cidades, estradas, destino, inicial, distancias[N];
int distanciaRota[N];
vector <ii> graph[N];


void dijkstra(int ini) {
  for(int i = 0; i < cidades; i++) {
    distancias[i] = inf;
  }

  priority_queue<ii, vector<ii>, greater<ii>> pq;
  distancias[ini] = 0;
  pq.push(ii(distancias[ini], ini));
  while(!pq.empty()) {
    ii top = pq.top(); pq.pop();
    int distU = top.first;
    int u = top.second;

    if(u < destino - 1 || distancias[u] < distU) {
      continue;
    }

    for(ii edge : graph[u]) {
      int v = edge.first, pesoAresta = edge.second;
      if(distU + pesoAresta < distancias[v]) {
        distancias[v] = distU + pesoAresta;
        pq.push(ii(distU + pesoAresta, v));
      }
    }
  }
}

void dfs(int ini, int dest) {
  for(ii edge : graph[ini]) {
    if(edge.first == ini + 1) {
      distanciaRota[ini] = distancias[ini - 1] + edge.second;
      dfs(ini + 1, dest);
    }
  }
}

int main() {
  while(true) {
    cin >> cidades >> estradas >> destino >> inicial;
    if(cidades == 0 && estradas == 0 && destino == 0 && inicial == 0) break; 
    int u, v, peso;
    for(int i = 0; i < estradas; i++) {
      cin >> u >> v >> peso;
      graph[u].push_back(ii(v, peso));
      graph[v].push_back(ii(u, peso));
    }
    dijkstra(inicial);
    for(int i = 0; i < cidades; i++) {
      cout << "Distancia de " << inicial << " até " << i << ": " << distancias[i] << endl;
    }
  }
  return 0;
}
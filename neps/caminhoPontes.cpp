#include <bits/stdc++.h>

#define MAX 1010
#define inf 10101010
using namespace std;

typedef pair<int, int> ii;

int n, m, processado[MAX], distancias[MAX];
vector<ii> adj[MAX];


void dijkstra(int start) {
  for(int i = 0; i <= n + 1; i++) {
    distancias[i] = inf;
    processado[i] = 0;
  }

  priority_queue<ii, vector<ii>, greater<ii>> pq;

  distancias[start] = 0;
  pq.push(ii(distancias[start], start));

  while(!pq.empty()) {
    ii atual = pq.top(); pq.pop();

    int distAtual = atual.first;
    int vAtual = atual.second;

    if(processado[vAtual] == 1)
      continue;

    processado[vAtual] = 1;

    for(ii viz : adj[vAtual]) {
      int vViz = viz.first, pesoAresta = viz.second;
      // cout << vAtual << "->" << vViz << " " << pesoAresta << endl;
      if(distAtual + pesoAresta < distancias[vViz]) {
        distancias[vViz] = distAtual + pesoAresta;
        pq.push(ii(distAtual + pesoAresta, vViz));
      }
    }

  } 

}

int main() {
  cin >> n >> m;
  for(int i = 0; i < m; i++) {
    int a, b, p;

    cin >> a >> b >> p;

    adj[a].push_back(ii(b, p));
    adj[b].push_back(ii(a, p));
  }

  dijkstra(0);

  // for(int i = 0; i <= n + 1; i++) {
  //   cout << distancias[i] << endl;
  // }

  cout << distancias[n + 1] << endl;
  return 0;
}
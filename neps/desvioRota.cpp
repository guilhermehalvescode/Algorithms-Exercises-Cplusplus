#include <bits/stdc++.h>
#define MAX 500
#define inf 250 * 260

using namespace std;

typedef pair<int, int> ii;

int n, m, c, k;

int distancias[MAX], processado[MAX];
vector<ii> adj[MAX];

void dijkstra(int start) {
  for(int i = 0; i < n; i++) {
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

      if(vAtual < c && vViz == vAtual + 1 && distAtual + pesoAresta < distancias[vViz]) {
        distancias[vViz] = distAtual + pesoAresta;
        pq.push(ii(distAtual + pesoAresta, vViz));
      }

      if(vAtual >= c && distAtual + pesoAresta < distancias[vViz]) {
        distancias[vViz] = distAtual + pesoAresta;
        pq.push(ii(distAtual + pesoAresta, vViz));
      }

    }
    


  }
}

void init() {
  for(int i = 0; i < MAX; i++) {
    adj[i].clear();
  }
}

int main () {

  while(true) {
    cin >> n >> m >> c >> k;

    if(!n && !m && !c && !k) break;

    init();

    for(int i = 0; i < m; i++) {
      int a, b, p;
      cin >> a >> b >> p;

      adj[a].push_back(ii(b, p));
      adj[b].push_back(ii(a, p));
    }

    dijkstra(k);

    cout << distancias[c - 1] << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
#define MAX 1010
#define inf 10101010
using namespace std;


typedef pair<int, int> ii;

int n, m;

vector<ii> graph[MAX];
int dist[MAX], proc[MAX];


int prim(int u) {
  for(int i = 0; i < MAX; i++) {
    dist[i] = inf;
    proc[i] = 0;
  }

  priority_queue<ii, vector<ii>, greater<ii>> pq;

  dist[u] = 0;
  pq.push(ii(dist[u], u));

  while(!pq.empty()) {
    ii atual = pq.top(); pq.pop();

    int distAtual = atual.first, uAtual = atual.second;

    if(proc[uAtual])
      continue;
    
    proc[uAtual] = 1;

    for(ii viz : graph[uAtual]) {
      int distViz = viz.second;
      int vViz = viz.first;

      if(distViz < dist[vViz] && !proc[vViz]) {
        dist[vViz] = distViz;
        pq.push(ii(dist[vViz], vViz));
      }
    }

  }

  int pesoArv = 0;
  for(int i = 0; i < n; i++) {
    pesoArv += dist[i];
  }

  return pesoArv;
}

int main() {

  cin >> n >> m;

  for(int i = 0; i < m; i++) {
    int p, q, u;

    cin >> p >> q >> u;

    graph[p].push_back(ii(q, u));
    graph[q].push_back(ii(p, u));
  }

  cout << prim(0) << endl;


  return 0;
}
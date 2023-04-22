#include <bits/stdc++.h>
#define MAX 15*16

using namespace std;

vector<int> graph[MAX];
int visitei[MAX], passos;


void init() {
  for(int i = 0; i < MAX; i++) {
    graph[i].clear();
    visitei[i] = 0;
    passos = 0;
  }
}

void dfs(int u) {
  if(visitei[u] == 1)
    return;

  visitei[u] = 1;

  for(int viz : graph[u]) {
    if(visitei[viz] != 1) {
      passos += 1;
      dfs(viz);
      passos += 1;
    }

  }

}
  
int main() {
  int test;
  cin >> test;

  while(test--) {
    int ini, n, m;

    init();
    cin >> ini;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
      int a, b;
      cin >> a >> b;

      graph[a].push_back(b);
      graph[b].push_back(a);

    }

    dfs(ini);
    cout << passos << endl;
  }
  

  return 0;
}
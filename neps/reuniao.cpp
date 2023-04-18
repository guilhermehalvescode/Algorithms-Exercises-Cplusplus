#include <bits/stdc++.h>
#define MAX 110
#define INF 10101010
using namespace std;


int n, m;
int adjMatrix[MAX][MAX];

void init() {
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      adjMatrix[i][j] = INF;
    }
    adjMatrix[i][i] = 0;
  }
}

void floyd() {
  for(int k = 0; k < n; k++) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k] + adjMatrix[k][j]);
      }
    }
  }
}

int getMin() {
  int minV = INF;

  for(int i = 0; i < n; i++) {

    int maxV = -1;
    for(int j = 0; j < n; j++) {
      maxV = max(adjMatrix[i][j], maxV);
    }

    minV = min(minV, maxV);
  }

  return minV;

}

int main() {
  cin >> n >> m;

  init();

  for(int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;

    adjMatrix[u][v] = min(adjMatrix[u][v], w);
    adjMatrix[v][u] = adjMatrix[u][v];

  }

  floyd();

  cout << getMin() << endl;


  return 0;
}
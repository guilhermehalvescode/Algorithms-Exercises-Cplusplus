#include <bits/stdc++.h>
#define MAX 110
#define inf 300
using namespace std;

typedef pair<int, int> ii;

int n;
int mina[MAX][MAX];
int distancias[MAX * MAX], processou[MAX * MAX];
vector<ii> graph[MAX * MAX];

void dijkstra(int v) {
  for (int i = 0; i < n * n; i++)
  {
    distancias[i] = inf;
    processou[i] = 0;
  }
  
  priority_queue<ii, vector<ii>, greater<ii>> pq;

  distancias[v] = 0;
  pq.push(ii(distancias[v], v));


  while(!pq.empty()) {
    ii atual = pq.top(); pq.pop();

    int distAtual = atual.first;
    int vAtual = atual.second;

    if(processou[vAtual] == 1)
      continue;

    processou[vAtual] = 1;


    for(ii viz : graph[vAtual]) {
      int vViz = viz.first;
      int pesoAresta = viz.second;


      if(distAtual + pesoAresta < distancias[vViz]) {
        distancias[vViz] = distAtual + pesoAresta;


        pq.push(ii(distAtual + pesoAresta, vViz));
      } 

    }

  }

}


int main()
{
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> mina[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      // (n - 1) * n + n - 1
      int vAtual = i * n + j;
      int vCima = vAtual - n;
      int vBaixo = vAtual + n;
      int vEsquerda = vAtual - 1;
      int vDireita = vAtual + 1;

      // aresta entre atual e cima
      if (i - 1 >= 0)
      {
        graph[vAtual].push_back(ii(vCima, mina[i][j]));
      }

      // cria aresta entre atual e pra baixo
      if (i + 1 < n)
      {
        graph[vAtual].push_back(ii(vBaixo, mina[i][j]));
      }

      // cria aresta entre atual e para esquerda
      if (j - 1 >= 0)
      {
        graph[vAtual].push_back(ii(vEsquerda, mina[i][j]));
      }

      // cria aresta entre atual e para direita
      if (j + 1 < n)
      {
        graph[vAtual].push_back(ii(vDireita, mina[i][j]));
      }
    }
  }

  dijkstra(0);

  cout << distancias[n * n - 1] << endl;

  return 0;
}
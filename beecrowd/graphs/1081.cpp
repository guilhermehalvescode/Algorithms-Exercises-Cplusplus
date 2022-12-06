#include <bits/stdc++.h>
#define G_SIZE 20

using namespace std;

vector<int> grafo[G_SIZE];
int visitados[G_SIZE];

void init()
{
  for (int i = 0; i < G_SIZE; i++)
  {
    visitados[i] = -1;
    grafo[i].clear();
  }
}

void printSpaces(int qnt)
{
  for (int i = 0; i < qnt; i++)
  {
    cout << " ";
  }
}

void dfs(int vertice, int profundidade)
{
  visitados[vertice] = 1;

  for (int i = 0; i < grafo[vertice].size(); i++)
  {
    int verticeVizinho = grafo[vertice][i];

    printSpaces(2 * profundidade);
    cout << vertice << "-" << verticeVizinho;

    bool naoVisitado = visitados[verticeVizinho] == -1;

    if (naoVisitado)
      cout << " pathR(G," << verticeVizinho << ")";

    cout << endl;

    if (naoVisitado)
    {
      dfs(verticeVizinho, profundidade + 1);
    }
  }
}

int main()
{
  int tests, vertices, arestas;
  cin >> tests;

  for (int teste = 1; teste <= tests; teste++)
  {
    init();

    if (teste != 1)
      cout << endl;

    cout << "Caso " << teste << ":";

    cin >> vertices >> arestas;

    for (int i = 0; i < arestas; i++)
    {
      int u, v;
      cin >> u >> v;
      if (find(grafo[u].begin(), grafo[u].end(), v) == grafo[u].end())
        grafo[u].push_back(v);
    }

    for (int i = 0; i < arestas; i++)
    {
      sort(grafo[i].begin(), grafo[i].end());
    }

    bool naoEhPrimeiroComponente = false;

    for (int i = 0; i < vertices; i++)
    {
      if (visitados[i] == -1)
      {
        if (grafo[i].size())
        {
          cout << endl;
        }

        dfs(i, 1);
      }
    }
  }

  cout << endl;

  return 0;
}
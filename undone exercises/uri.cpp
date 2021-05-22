#include <bits/stdc++.h>
#define N 10000
using namespace std;

vector<int> graph[2][N];
int n, weights[2][N - 1];

bool check()
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < n; j++)
    {
      weights[i][j] = 0;
    }
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < n; j++)
    {
      weights[i][(graph[i][j].size() - 1)]++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << "1: " << weights[0][i] << " 2: " << weights[1][i] << endl;

    if (weights[0][i] != weights[1][i])
      return false;
  }
  return true;
}

int main()
{
  while (cin >> n)
  {
    int a, b;
    for (int i = 0; i < n - 1; i++)
    {
      cin >> a >> b;

      graph[0][a - 1].push_back(b - 1);
      graph[0][b - 1].push_back(a - 1);
    }
    for (int i = 0; i < n - 1; i++)
    {
      cin >> a >> b;
      graph[1][a - 1].push_back(b - 1);
      graph[1][b - 1].push_back(a - 1);
    }
    cout << check() << endl;
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < n; j++)
      {
        graph[i][j].clear();
      }
    }
  }
  return 0;
}
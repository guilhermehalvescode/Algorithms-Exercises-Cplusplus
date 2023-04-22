#include <bits/stdc++.h>
#define MAX 1010
using namespace std;

int n, m, passos;
int mat[MAX][MAX], jaPassei[MAX][MAX];

int solve(int i, int j)
{
  if (mat[i][j] == 3)
    return 1;

  if (i < 0 || i >= n)
    return 0;

  if (j < 0 || j >= m)
    return 0;

  if(jaPassei[i][j] == 1)
    return 0;
  
  jaPassei[i][j] = 1;


  if (i - 1 >= 0 && mat[i - 1][j] != 0)
  {
    passos += 1;
    if (solve(i - 1, j) == 1)
      return 1;
    passos -= 1;
  }

  if (i + 1 < n && mat[i + 1][j] != 0)
  {
    passos += 1;
    if (solve(i + 1, j) == 1)
      return 1;
    passos -= 1;
  }

  if (j - 1 >= 0 && mat[i][j - 1] != 0)
  {
    passos += 1;
    if (solve(i, j - 1) == 1)
      return 1;
    passos -= 1;
  }

  if (j + 1 < m && mat[i][j + 1] != 0)
  {
    passos += 1;
    if (solve(i, j + 1) == 1)
      return 1;
    passos -= 1;
  }
  
  return 0;
}

int main()
{
  cin >> n >> m;

  int iInicio, jInicio;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> mat[i][j];
      if (mat[i][j] == 2)
      {
        iInicio = i;
        jInicio = j;
      }
    }
  }

  passos = 1;
  solve(iInicio, jInicio);
  cout << passos << endl;

  return 0;
}
#include <bits/stdc++.h>
#define N 5
using namespace std;

int mat[N][N], jaPassei[N][N];

void init()
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      mat[i][j] = 0;
      jaPassei[i][j] = 0;
    }
  }
}

int solve(int i, int j) {
  if(i == N - 1 && j == N - 1)
    return 1;

  if(i < 0 || i >= N)
    return 0;

  if(j < 0 || j >= N)
    return 0;

  if(jaPassei[i][j] == 1)
    return 0;

  jaPassei[i][j] = 1;

  if(i - 1 >= 0 && mat[i - 1][j] == 0 && solve(i - 1, j) == 1)
    return 1;

  if(i + 1 < N && mat[i + 1][j] == 0 && solve(i + 1, j) == 1)
    return 1;

  if(j - 1 >= 0 && mat[i][j - 1] == 0 && solve(i, j - 1) == 1)
    return 1;

  if(j + 1 < N && mat[i][j + 1] == 0 && solve(i, j + 1) == 1)
    return 1;

  return 0;
}

int main()
{
  int tests;
  cin >> tests;

  for(int test = 0; test < tests; test++)
  {
    init();

    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        cin >> mat[i][j];
      }
    }
    cout << (solve(0, 0) == 1 ? "ganhou" : "perdeu") << endl;
  }


  return 0;
}
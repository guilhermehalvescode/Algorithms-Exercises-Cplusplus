#include <bits/stdc++.h>

using namespace std;

int n;
int mat[11][11], jaPassei[11][11];

void init()
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      mat[i][j] = 0;
      jaPassei[i][j] = 0;
    }
  }
}

int solve(int i, int j) {
  if(i == n - 1 && j == n - 1)
    return 1;

  if(i < 0 || i >= n)
    return 0;

  if(j < 0 || j >= n)
    return 0;

  if(jaPassei[i][j] == 1)
    return 0;

  jaPassei[i][j] = 1;

  if(i - 1 >= 0 && mat[i - 1][j] == 0 && solve(i - 1, j) == 1)
    return 1;

  if(i + 1 < n && mat[i + 1][j] == 0 && solve(i + 1, j) == 1)
    return 1;

  if(j - 1 >= 0 && mat[i][j - 1] == 0 && solve(i, j - 1) == 1)
    return 1;

  if(j + 1 >= 0 && mat[i][j + 1] == 0 && solve(i, j + 1) == 1)
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
    cin >> n;


    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> mat[i][j];
      }
    }
    cout << solve(0, 0) << endl;
  }


  return 0;
}
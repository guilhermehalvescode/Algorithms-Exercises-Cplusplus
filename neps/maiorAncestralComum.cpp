#include <bits/stdc++.h>

#define MAX 1010
using namespace std;

int n, m, s1[MAX], s2[MAX], tab[MAX][MAX];

int lcs(int a, int b)
{
  if (a == 0 || b == 0)
    return tab[a][b] = 0;

  if (tab[a][b] != -1)
    return tab[a][b];

  if (s1[a - 1] == s2[b - 1])
    return tab[a][b] = 1 + lcs(a - 1, b - 1);

  return tab[a][b] = max(lcs(a - 1, b), lcs(a, b - 1));
}

int main()
{
  cin >> n >> m;

  memset(tab, -1, sizeof(tab));

  for (int i = 0; i < n; i++)
  {
    cin >> s1[i];
  }

  for (int i = 0; i < m; i++)
  {
    cin >> s2[i];
  }

  int tamAncestralComum = lcs(n, m);

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     cout << tab[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  // cout << tamAncestralComum << endl;
  cout << (n - tamAncestralComum) << " " << (m - tamAncestralComum) << endl;

  return 0;
}
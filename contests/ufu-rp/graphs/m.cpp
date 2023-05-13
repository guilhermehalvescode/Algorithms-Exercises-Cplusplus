#include <bits/stdc++.h>
#define MAX 50

using namespace std;

int iMax = 0, jMax = 0;

char mapa[MAX][MAX], jaFui[MAX][MAX];

void flood(int i, int j)
{
  if (i < 0 || i >= iMax)
    return;

  if (j < 0 || j >= jMax)
    return;

  if (mapa[i][j] == 'X' || jaFui[i][j] == 1)
    return;

  jaFui[i][j] = 1;

  mapa[i][j] = 'T';

  flood(i + 1, j);
  flood(i - 1, j);
  flood(i, j + 1);
  flood(i, j - 1);
}

int main()
{
  string str;
  while (getline(cin, str))
  {
    jMax = str.size();

    for (int j = 0; j < str.size(); j++)
    {
      mapa[iMax][j] = str[j];
    }

    iMax++;
  }

  for (int i = 0; i < iMax; i++)
  {
    for (int j = 0; j < jMax; j++)
    {
      if (mapa[i][j] == 'T')
        flood(i, j);
    }
  }

  for (int i = 0; i < iMax; i++)
  {
    for (int j = 0; j < jMax; j++)
    {
      cout << mapa[i][j];
    }
    cout << endl;
  }

  return 0;
}
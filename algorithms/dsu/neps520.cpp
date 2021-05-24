#include <bits/stdc++.h>

#define N 1010

using namespace std;

typedef pair<int, int> ii;
typedef pair<double, ii> dii;

int n, comp[N], dMax, rk[N], nComp;
ii cordArvores[N];

void init()
{
  nComp = n;
  for (int i = 0; i < n; i++)
  {
    cordArvores[i] = {0, 0};
    comp[i] = i;
    rk[i] = 1;
  }
}

int find(int a)
{
  return a == comp[a] ? a : comp[a] = find(comp[a]);
}

void join(int a, int b)
{
  int x = find(a);
  int y = find(b);
  if (x == y)
    return;

  if (rk[x] < rk[y])
    swap(x, y);

  comp[y] = x;
  rk[x] += rk[y];
  nComp--;
}

void geraArestas()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      ii coord1 = cordArvores[i];
      ii coord2 = cordArvores[j];
      if (i != j)
      {
        double dist = hypot(coord1.first - coord2.first, coord1.second - coord2.second);
        if (dist <= dMax)
          join(i, j);
      }
    }
  }
}


int main()
{
  scanf("%d %d", &n, &dMax);
  init();
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &cordArvores[i].first, &cordArvores[i].second);
  }
  geraArestas();

  if (nComp == 1)
    printf("S\n");
  else
    printf("N\n");
  return 0;
}
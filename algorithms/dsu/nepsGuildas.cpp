#include <bits/stdc++.h>
#define MAX 100010

using namespace std;

int pai[MAX], peso[MAX], pontos[MAX];

void init()
{
  for (int i = 0; i < MAX; i++)
  {
    pai[i] = i;
    peso[i] = 0;
    pontos[i] = 0;
  }
}

int find(int a)
{
  if (pai[a] == a)
    return a;

  return pai[a] = find(pai[a]);
}

void join(int a, int b)
{

  int x = find(a), y = find(b);

  if (x == y)
    return;

  if (peso[x] < peso[y])
  {
    pai[x] = y;
    pontos[y] += pontos[x];
  }

  if (peso[x] > peso[y])
  {
    pai[y] = x;
    pontos[x] += pontos[y];
  }

  if (peso[x] == peso[y])
  {
    pai[x] = y;
    pontos[y] += pontos[x];

    peso[y]++;
  }
}

int main()
{
  int n, m;

  while (true)
  {
    cin >> n >> m;

    if(n == 0 && m == 0)
      return 0;

    init();
    int rafaelGanhos = 0;

    for (int i = 1; i <= n; i++)
    {
      cin >> pontos[i];
    }

    for (int i = 0; i < m; i++)
    {
      int q, a, b;

      cin >> q >> a >> b;

      if (q == 1)
        join(a, b);
      else
      {
        int guildaRafael = find(1), guildaA = find(a), guildaB = find(b);
       
        int pontosGuildaA = pontos[guildaA];
        int pontosGuildaB = pontos[guildaB];

        if(pontosGuildaA > pontosGuildaB && guildaRafael == guildaA)
          rafaelGanhos++;
        if(pontosGuildaB > pontosGuildaA && guildaRafael == guildaB)
          rafaelGanhos++;
      }
    }

    cout << rafaelGanhos << endl;
  }

  return 0;
}
#include <bits/stdc++.h>
#define N 101010
using namespace std;

typedef pair<int, int> ii;

int n, m, guilda[N], poderGuilda[N];
vector<int> lista[N];

void init()
{
  int pontos;
  for (int i = 1; i <= n; i++)
  {
    poderGuilda[i] = 0;
    guilda[i] = 0;
    lista[i].clear();
  }
  for (int i = 1; i <= n; i++)
  {
    cin >> pontos;
    poderGuilda[i] = pontos;
    guilda[i] = i;
    lista[i].push_back(i);
  }
}

int find(int a)
{
  return guilda[a];
}

void join(int a, int b)
{

  if (find(a) == find(b))
    return;

  int x = find(a), y = find(b);
  if (lista[x].size() < lista[y].size())
  {
    swap(x, y);
  }

  while (lista[y].size())
  {
    int elem = lista[y].back();
    lista[y].pop_back();

    lista[x].push_back(elem);
    guilda[elem] = x;
  }
  poderGuilda[x] += poderGuilda[y];
}

int main()
{
  while (true)
  {
    cin >> n >> m;
    if (n == 0 && m == 0)
      break;
    int vit = 0;
    int q, a, b;
    init();
    for (int i = 0; i < m; i++)
    {
      cin >> q >> a >> b;
      if (q == 1)
      {
        join(a, b);
      }
      else
      {
        int ga = find(a), gb = find(b);
        if (ga == gb)
          continue;
        int guildaRaf = find(1);
        if (guildaRaf == ga)
        {
          vit += poderGuilda[ga] > poderGuilda[gb];
        }
        if (guildaRaf == gb)
        {
          vit += poderGuilda[gb] > poderGuilda[ga];
        }
      }
    }
    cout << vit << endl;
  }

  return 0;
}
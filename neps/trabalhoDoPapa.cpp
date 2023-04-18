#include <bits/stdc++.h>
#define MAX 1000
#define INF 1000000
using namespace std;

int n;
pair<int, int> caixas[MAX];
int pegueiCaixa[MAX];

// int memo[MAX][INF];

int solve(int qnt, int c)
{
  // if(memo[qnt][c] != -1)
  //   return memo[qnt][c];

  int maxValue = qnt;

  for (int i = 0; i < n; i++)
  {
    // se eu conseguir pegar e colocar a caixa em cima
    if (!pegueiCaixa[i] && c >= caixas[i].first)
    {

      pegueiCaixa[i] = 1;
      // pego a menor resistência das caixas abaixo ou da atual
      int novoC = min(c - caixas[i].first, caixas[i].second - caixas[i].first);
      maxValue = max(maxValue, solve(qnt + 1, novoC));
      pegueiCaixa[i] = 0;
    }
  }

  // memo[qnt][c] = maxValue;

  return maxValue;
}

// void init() {
//   for(int i = 0; i < MAX; i++) {
//     for(int j = 0; j < INF; j++) {
//       memo[i][j] = -1;
//     }
//   }
// }

int main()
{

  cin >> n;

  // init();

  for (int i = 0; i < n; i++)
  {
    int p, r;

    cin >> p >> r;

    caixas[i] = make_pair(p, r);
    pegueiCaixa[i] = p > r;
  }

  cout << solve(0, INF) << endl;

  return 0;
}

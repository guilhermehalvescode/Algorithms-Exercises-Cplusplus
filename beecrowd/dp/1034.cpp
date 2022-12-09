#include <bits/stdc++.h>
#define N_MAX 25
#define M_MAX 1000001

using namespace std;
typedef long unsigned int lui;

int blocos[N_MAX], n;
int dp[M_MAX];

void init()
{
  for (int i = 0; i < N_MAX; i++)
  {
    blocos[i] = 0;
  }
  for (int i = 0; i < M_MAX; i++)
  {
    dp[i] = -1;
  }
}

int calculaDp(int m)
{
  if (m == 0)
    return 1;

  if (m < 0)
    return 0;

  if (dp[m] >= 0)
    return dp[m];

  for (int i = n - 1; i >= 0; i--)
  {
    int resultadoDp = calculaDp(m - blocos[i]);
    if (resultadoDp >= 0)
      return dp[m - blocos[i]] = 1;
  }

  return dp[m] = 0;
}

int main()
{
  lui tests;
  cin >> tests;

  for (lui test = 0; test < tests; test++)
  {
    int m;

    init();

    cin >> n >> m;
    for (int i = 0; i < n; i++)
      cin >> blocos[i];

    sort(blocos, blocos + n);

    calculaDp(m);
    cout << dp[m] << endl;
  }

  return 0;
}
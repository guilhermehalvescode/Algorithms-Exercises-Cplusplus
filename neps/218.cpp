#include <bits/stdc++.h>

using namespace std;

int main()
{
  char escolha;
  cin >> escolha;

  double v1, v2, res;

  cin >> v1 >> v2;

  if (escolha == 'M')
  {
    res = v1 * v2;
  }
  else
  {
    res = v1 / v2;
  }

  printf("%.2f\n", res);

  return 0;
}
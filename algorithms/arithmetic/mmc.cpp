#include <bits/stdc++.h>

using namespace std;

int mmc(int numero1, int numero2)
{
  int mmc;

  for (int i = 2; i <= numero2; i++)
  {
    int aux = numero1 * i;

    if ((aux % numero2) == 0)
    {
      mmc = aux;
      break; // ??????
    }
  }

  return mmc;
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << mmc(a, b) << endl;
}
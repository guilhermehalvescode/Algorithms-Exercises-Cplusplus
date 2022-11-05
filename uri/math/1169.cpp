#include <bits/stdc++.h>

using namespace std;

int main()
{

  int testes;
  cin >> testes;

  while (testes--)
  {
    int casas;

    cin >> casas;

    cout << fixed << setprecision(0);

    cout << trunc(pow(2, casas) / 12000) << " kg" << endl;
  }

  return 0;
}
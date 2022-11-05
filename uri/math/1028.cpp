#include <bits/stdc++.h>

using namespace std;

int mdc(int numero1, int numero2)
{
  int resto;

  do
  {
    resto = numero1 % numero2;

    numero1 = numero2;
    numero2 = resto;

  } while (resto != 0);

  return numero1;
}

int main()
{

  int n;
  cin >> n;

  while (n--)
  {
    int a, b;
    cin >> a >> b;
    cout << mdc(a, b) << endl;
  }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tam;
  cin >> tam;

  string respostas, gabarito;

  cin >> respostas >> gabarito;

  int acertos = 0;
  for (int i = 0; i < respostas.length(); i++)
  {
    if (respostas[i] == gabarito[i])
      acertos++;
  }

  cout << acertos << endl;

  return 0;
}
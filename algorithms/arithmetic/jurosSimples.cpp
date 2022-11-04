#include <bits/stdc++.h>

using namespace std;

float jurosSimples(float capital, float porcentagem, int anos)
{
  return capital * (porcentagem / 100.0) * anos;
}

int main()
{
  float capital, porcentagem;
  int tempo;
  cin >> capital >> porcentagem >> tempo;
  cout << jurosSimples(capital, porcentagem, tempo) << endl;
}
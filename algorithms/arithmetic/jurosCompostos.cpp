#include <bits/stdc++.h>

using namespace std;

float jurosCompostos(float capital, float porcentagem, int anos)
{
  return capital * pow(1 + porcentagem / 100, anos);
}

int main()
{
  float capital, porcentagem;
  int tempo;
  cin >> capital >> porcentagem >> tempo;
  cout << jurosCompostos(capital, porcentagem, tempo) << endl;
}
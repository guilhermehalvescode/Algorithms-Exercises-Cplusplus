#include <bits/stdc++.h>

using namespace std;

long double removePart(long double valor) {
  return valor - (((valor * 100) - (int)(valor * 100)) * 0.01);
}

int main()
{
  string number, cpf, l1, l2;
  char temp;
  cin >> l1 >> l2;
  stringstream cpfIn(l1);
  stringstream num(l2);
  while (cpf.size() < 11)
  {
    cpfIn >> temp;
    if (isdigit(temp))
    {
      cpf.push_back(temp);
    }
  }
  long double desvio;
  while (cpfIn >> temp)
  {
    if (isdigit(temp) || temp == '.')
    {
      number.push_back(temp);
    }
  }
  desvio = removePart(stod(number));
  number.clear();
  while (num >> temp)
  {
    if (isdigit(temp) || temp == '.')
    {
      number.push_back(temp);
    }
  }
  desvio += removePart(stod(number));
  cout << "cpf: " << cpf << endl;
  printf("%.2Lf\n", desvio);
  return 0;
}
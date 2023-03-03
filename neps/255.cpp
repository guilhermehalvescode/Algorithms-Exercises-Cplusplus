#include <bits/stdc++.h>
#define MAX 101010

typedef long unsigned int lu;
using namespace std;

lu n, k;
lu numeroCasas[MAX];

lu bs(lu token)
{
  lu inicio = 0, meio, fim = n - 1;
  while (inicio <= fim)
  {
    meio = (inicio + fim) / 2;

    if (numeroCasas[meio] == token)
      return meio;
    if (numeroCasas[meio] > token)
      fim = meio - 1;
    if (numeroCasas[meio] < token)
      inicio = meio + 1;
  }

  return -1;
}

int main()
{
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> numeroCasas[i];
  }

  cin >> k;

  for (int i = 0; i < n; i++)
  {
    long searchedNum = abs((long)(k - numeroCasas[i])), indexOfSearchedNum;
    if ((indexOfSearchedNum = bs(searchedNum)) != -1)
    {
      cout << numeroCasas[i] << " " << numeroCasas[indexOfSearchedNum] << endl;
      break;
    }
  }

  return 0;
}
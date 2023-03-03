#include <bits/stdc++.h>
#define MAX 10101010

using namespace std;
typedef long long unsigned int lu;

struct intervalos
{
  lu valor;
  lu recompensa;
};

lu n, m;
intervalos intervalosDeForca[MAX];

lu buscabin(lu forca)
{
  lu inicio = 0, meio = 0, fim = n - 2;

  // olhando no fim dos intervalos (força >= que último elemento do intervalo)
  if (intervalosDeForca[fim].valor <= forca)
    return intervalosDeForca[fim + 1].recompensa;

  // olhando no começo dos intervalos (força < que primeiro elemento do intervalo)
  if (intervalosDeForca[inicio].valor > forca)
    return intervalosDeForca[inicio].recompensa;

  while (inicio <= fim)
  {
    meio = (inicio + fim) / 2;

    // verificando se caiu no intervalo
    if (intervalosDeForca[meio].valor <= forca && intervalosDeForca[meio + 1].valor > forca)
      return intervalosDeForca[meio + 1].recompensa;

    if (intervalosDeForca[meio].valor <= forca)
      inicio = meio + 1;

    if (intervalosDeForca[meio + 1].valor > forca)
      fim = meio - 1;
  }

  return intervalosDeForca[meio + 1].recompensa;
}

int main()
{

  cin >> n >> m;

  for (lu i = 0; i < n - 1; i++)
  {
    cin >> intervalosDeForca[i].valor;
  }

  for (lu i = 0; i < n; i++)
  {
    cin >> intervalosDeForca[i].recompensa;
  }

  lu forcaOgro;
  for (lu i = 0; i < m; i++)
  {
    cin >> forcaOgro;
    if (i != 0)
      cout << " ";
    cout << buscabin(forcaOgro);
  }

  cout << endl;

  return 0;
}
#include <bits/stdc++.h>

#define MAX 1000001

using namespace std;

struct horarios
{
  int inicio;
  int fim;
};

horarios horariosMarcados[MAX];

bool compare(horarios a, horarios b)
{
  return a.fim < b.fim;
}

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int inicio, fim;

    cin >> horariosMarcados[i].inicio >> horariosMarcados[i].fim;
  }

  sort(horariosMarcados, horariosMarcados + n, compare);

  int contSemSobrepos = 1;
  int horarioDeFimAtual = horariosMarcados[0].fim;
  for (int i = 1; i < n; i++)
  {
    if (horariosMarcados[i].inicio >= horarioDeFimAtual)
    {
      contSemSobrepos++;
      horarioDeFimAtual = horariosMarcados[i].fim;
    }
  }

  cout << contSemSobrepos << endl;

  return 0;
}
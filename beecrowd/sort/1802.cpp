#include <bits/stdc++.h>

using namespace std;

vector<int> livros[5];

vector<int> generatePossibilities(int ini)
{

  if (ini == 4)
  {
    vector<int> vet(livros[ini]);
    return vet;
  }

  vector<int> results, possib;
  for (int i = 0; i < livros[ini].size(); i++)
  {
    possib = generatePossibilities(ini + 1);

    for (int pos : possib)
    {
      results.push_back(livros[ini][i] + pos);
    }
  }

  return results;
}

int kDistinctSets(int n)
{
  vector<int> possibilities = generatePossibilities(0);

  sort(possibilities.begin(), possibilities.end());

  int sum = 0, times = possibilities.size();
  for (int i = times - 1; i >= times - n; i--)
  {
    sum += possibilities[i];
  }

  return sum;
}

int main()
{

  int qntTipos = 5, k;

  for (int tipo = 0; tipo < qntTipos; tipo++)
  {
    int qntLivros;

    cin >> qntLivros;

    while (qntLivros--)
    {
      int precoLivro;
      cin >> precoLivro;

      livros[tipo].push_back(precoLivro);
    }
  }
  cin >> k;

  cout << kDistinctSets(k) << endl;

  return 0;
}
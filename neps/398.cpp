#include <bits/stdc++.h>

using namespace std;

int main()
{
  char chave;
  string entrada;
  cin >> entrada;
  cin >> chave;

  int counter = 0;

  for (char letra : entrada)
  {
    if (letra == chave)
      counter++;
  }

  cout << counter << endl;

  return 0;
}
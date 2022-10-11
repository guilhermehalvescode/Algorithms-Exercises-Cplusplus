#include <bits/stdc++.h>

using namespace std;

int letters[26];

void init()
{
  for (int i = 0; i < 26; i++)
  {
    letters[i] = 0;
  }
}

int main()
{
  int n;
  cin >> n;
  cin.ignore();

  while (n--)
  {
    init();

    string line;
    getline(cin, line);

    for (char c : line)
    {
      if (isalpha(c))
      {
        letters[tolower(c) - 'a']++;
      }
    }

    int indiceMaior = 25;
    int maior = letters[25];

    for (int i = 24; i >= 0; i--)
    {
      if (maior < letters[i])
      {
        indiceMaior = i;
        maior = letters[i];
      }
    }

    for (int i = 0; i < 26; i++)
    {
      if (maior == letters[i])
      {
        cout << (char)(i + 'a');
      }
    }
    cout << endl;
  }
  return 0;
}
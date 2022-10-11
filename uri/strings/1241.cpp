#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  string primeiro, segundo;

  while (n--)
  {
    cin >> primeiro >> segundo;
    string substr;
    try
    {
      substr = primeiro.substr(primeiro.length() - segundo.length(), segundo.length());
    }
    catch (out_of_range err)
    {
    }
    cout << (segundo == substr ? "encaixa" : "nao encaixa") << endl;
  }

  return 0;
}
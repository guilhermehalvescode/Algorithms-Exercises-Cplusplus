#include <bits/stdc++.h>

using namespace std;

string replaceAlphasForSpaceString(string str)
{

  for (int i = 0; i < str.length(); i++)
  {
    if (isalpha(str[i]))
      str[i] = ' ';
  }
  return str;
}

int sumNumbersInString(string str)
{
  int sum = 0, j = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] != ' ')
    {
      j = 0;
      while (i + j < str.length() && str[i + j] != ' ')
        j++;

      sum += stoi(str.substr(i, j));
      i += j;
    }
  }

  return sum;
}

int main()
{
  int n, n1, n2, n3;
  cin >> n;
  string line, num1, num2, num3;

  for (int i = 0; i < n; i++)
  {
    cin >> line;
    line = replaceAlphasForSpaceString(line);
    cout << sumNumbersInString(line) << endl;
  }

  return 1;
}
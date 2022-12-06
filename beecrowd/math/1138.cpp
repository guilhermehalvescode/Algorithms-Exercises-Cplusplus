#include <bits/stdc++.h>

using namespace std;

typedef long unsigned int lui;

lui digitos[10];

void init()
{
  for (int i = 0; i < 10; i++)
  {
    digitos[i] = 0;
  }
}

void processNumber(lui i)
{
  string number = to_string(i);
  for (char c : number)
  {
    digitos[c - '0']++;
  }
}

int main()
{

  lui a, b;
  while (true)
  {
    cin >> a >> b;

    if (a == 0 && b == 0)
      break;

    init();

    for (lui i = a; i <= b; i++)
      processNumber(i);

    for (int i = 0; i < 10; i++)
    {
      cout << digitos[i];
      if (i != 9)
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}
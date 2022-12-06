#include <bits/stdc++.h>

using namespace std;

priority_queue<int> elements;

void init()
{
  while (elements.size() != 0)
    elements.pop();
}

int main()
{
  int n;

  while (cin >> n)
  {
    init();
    int nums;
    cin >> nums;
    unsigned int value;

    for (int i = 0; i < n; i++)
    {
      cin >> value;
      if (elements.size() == nums && value > -elements.top())
      {
        elements.pop();
        elements.push(-value);
      }
      else if (elements.size() != nums)
        elements.push(-value);
    }

    long unsigned int acum = 0;
    while (elements.size() != 0)
    {
      acum += -elements.top();
      elements.pop();
    }

    cout << acum % 1000000007 << endl;
  }

  return 0;
}
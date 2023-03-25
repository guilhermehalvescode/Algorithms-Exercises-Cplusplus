#include <bits/stdc++.h>

using namespace std;

int main()
{
  set<int> nums;

  int n;
  cin >> n;
  int size = 0;

  for (int i = 0; i < n; i++)
  {
    int num;

    cin >> num;

    if (nums.find(num) != nums.end())
    {

      if (nums.size() > size)
        size = nums.size();

      nums.clear();
    }
    nums.insert(num);
  }
  cout << size << endl;

  return 0;
}
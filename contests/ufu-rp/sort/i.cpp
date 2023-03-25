#include <bits/stdc++.h>

typedef long unsigned int lu;

using namespace std;


int main() {
  set<lu> nums;

  lu n;
  cin >> n;
  lu size = 0;

  for(lu i = 0; i < n; i++) {
    lu num;

    cin >> num;
    nums.insert(num);

  }

  cout << nums.size() << endl;


  return 0;
}
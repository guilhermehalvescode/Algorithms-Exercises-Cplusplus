#include <bits/stdc++.h>

typedef long unsigned int lu;

using namespace std;


int main() {
  set<lu> cods;
  lu a;

  while(cin >> a) {
    if(a % 2 != 0)
      cods.insert(a);
  }

  for(auto c : cods) {
    cout << c << endl;
  }

  return 0;
}
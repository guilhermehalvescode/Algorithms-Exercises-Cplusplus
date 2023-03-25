#include <bits/stdc++.h>

typedef long unsigned int lu;

using namespace std;


int main() {
  set<string> nomes;
  string a;

  
  while(getline(cin, a)) {
    nomes.insert(a);
  }

  for(auto c : nomes) {
    cout << c << endl;
  }

  return 0;
}
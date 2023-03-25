#include <bits/stdc++.h>

typedef long unsigned int lu;

using namespace std;


int main() {
  string a, b;

  cin >> a;
  cin >> b;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  cout << ((int) (a == b)) << endl;


  return 0;
}
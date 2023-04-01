#include <bits/stdc++.h>

using namespace std;



int main() {
  int a, b, c;

  cin >> a >> b >> c;
  int acum = 0;
  for(int i = 0; i < c; i++) {
    acum += a + b*i;
  }

  cout << acum << endl;
  return 0;
}
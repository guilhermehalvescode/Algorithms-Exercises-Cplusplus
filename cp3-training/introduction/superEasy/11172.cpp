#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int a, b;
    cin >> a >> b;
    if(a == b) 
      cout << "=\n";
    else 
      cout << ((a > b) ? ">\n" : "<\n"); 
  }
  return 0;
}
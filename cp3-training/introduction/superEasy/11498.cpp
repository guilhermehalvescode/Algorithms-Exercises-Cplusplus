#include <bits/stdc++.h>

using namespace std;

int main() {
  int k;
  int x, y;
  int a, b;
  while(true) {
    cin >> k;
    if(!k) return 0;
    cin >> x >> y;
    while(k--) {
      cin >> a >> b;
      if(a == x || b == y) 
        cout << "divisa\n";
      else if(a < x && b > y) 
        cout << "NO\n";
      else if(a > x && b > y) 
        cout << "NE\n";
      else if(a < x && b < y)
        cout << "SO\n";
      else 
        cout << "SE\n";
    }
  }
  
  return 0;
}
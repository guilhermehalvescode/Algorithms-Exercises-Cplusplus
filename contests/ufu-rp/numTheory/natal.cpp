#include <bits/stdc++.h>

using namespace std;

typedef unsigned int ui;


map<ui, pair<ui, ui>> primos;

int main() {
  ui n;


  ui num = 1;

  while(num*num + (num+1)*(num+1) < INT32_MAX) {
    primos[num*num + (num+1)*(num+1)] = make_pair(num, num + 1);
  }

  while(cin >> n) {
    cout << primos[n].first << " " << primos[n].second << endl;
  }

  return 0;
}
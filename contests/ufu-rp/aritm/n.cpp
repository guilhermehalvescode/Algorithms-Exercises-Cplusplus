#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main() {
  string num;

  cin >> num;

  ui val = 0, pot = 1;
  for(int i = num.length() - 1; i >= 0; i--) {
    if(num[i] == '1')
      val += pot;
    pot = pot << 1;
  }

  cout << val << endl;


  return 0;
}
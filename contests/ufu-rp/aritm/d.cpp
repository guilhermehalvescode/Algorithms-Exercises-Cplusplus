#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;


int proc(ui a) {
  for(int i = 0; i < sqrt(a); i++) {
    for(int j = 0; j*j < sqrt(a); j++) {
      if(i == a)
        return 1;
    }
  }
  return 0;
}

int main() {
  ui a;

  while(cin >> a) {
    cout << proc(a) << endl;
  }

  return 0;
}
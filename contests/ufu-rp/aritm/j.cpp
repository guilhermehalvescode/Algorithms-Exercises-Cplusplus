#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;


int proc(ui a) {
  for(int i = 0; i*i < a; i++) {
    for(int j = 0; j*j < a; j++) {
      if(i*i + j*j == a)
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
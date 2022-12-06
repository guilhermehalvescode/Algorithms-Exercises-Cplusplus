#include <bits/stdc++.h>
#define MAX 1010

using namespace std;

int n, l, c;
string words[MAX];

void init() {
  for(int i = 0; i < MAX; i++) {
    words[i].clear();
  }
}

int evalPages() {
  int linhas = 1, pags, caracs = 0;
  for(int i = 0; i < n; i++) {
    int newCaracs = words[i].size();
    newCaracs += caracs != 0;
    if(caracs + newCaracs <= c) {
      caracs += newCaracs;
    } else {
      i--;
      caracs = 0;
      linhas++;
    }
  }
  return floor(linhas/l) + ((linhas % l) != 0);
} 

int main() {

  while(cin >> n >> l >> c) {
    init();
    string palavra;
    for(int i = 0; i < n; i++) {
      cin >> words[i];
    }
    cout << evalPages() << endl;
  }
  return 0;
}
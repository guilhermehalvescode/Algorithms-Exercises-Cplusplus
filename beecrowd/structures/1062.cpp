#include <bits/stdc++.h>

using namespace std;

int n;
stack <int> vagoes;
vector <int> outcome;

bool eval() {
  int vagao = 1, matches = 0;
  stack <int> saida;
  while(vagao <= n) {
    do {
      vagoes.push(vagao++);
    } while(vagoes.top() != outcome[matches] && vagao <= n);
    while(!vagoes.empty() && vagoes.top() == outcome[matches]) {
      saida.push(vagoes.top());
      vagoes.pop();
      matches++;
    }
  }
  return saida.size() == outcome.size();
}

int main() {
  int val, stop;
  while(true) {
    cin >> n;
    if(!n) return 0;
    while(true) {
      while(!vagoes.empty()) vagoes.pop();
      while(!outcome.empty()) outcome.pop_back();
      stop = 0;
      for(int i = 0; i < n; i++) {
        cin >> val;
        if(!val) {
          stop = 1;
          break;
        }
        outcome.push_back(val);
      } 
      if(stop) break;
      cout << (eval() ? "Yes" : "No") << endl;
    }
    cout << endl;
  }
  return 0;
}
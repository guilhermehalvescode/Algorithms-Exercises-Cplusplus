#include <bits/stdc++.h>

using namespace std;

int n;
stack <char> vagoes;
vector <char> income, outcome;
void eval() {
  int inc = 0, out = 0;
  while(inc < n) {
    do {
      vagoes.push(income[inc++]);
      cout << "I";
    } while(vagoes.top() != outcome[out] && inc < n);
    while(!vagoes.empty() && vagoes.top() == outcome[out]) {
      vagoes.pop();
      cout << "R";
      out++;
    }
  }
  if(out != n) cout << " Impossible";
}

int main() {
  char val;
  while(true) {
    cin >> n;
    if(!n) return 0;
    while(!vagoes.empty()) vagoes.pop();
    while(!outcome.empty()) outcome.pop_back();
    while(!income.empty()) income.pop_back();
    for(int i = 0; i < n; i++) {
      cin >> val;
      income.push_back(val);
    } 
    for(int i = 0; i < n; i++) {
      cin >> val;
      outcome.push_back(val);
    } 
    eval();
    cout << endl;
  }
  return 0;
}
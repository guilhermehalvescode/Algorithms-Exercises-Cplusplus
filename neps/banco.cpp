#include <bits/stdc++.h>

using namespace std;


int main () {
  int c, n;

  priority_queue<int> caixas;

  cin >> c >> n;

  while(caixas.size() < c) {
    caixas.push(0);
  }

  int pessoasComTempoMaiorQueVinte = 0;
  for(int i = 0; i < n; i++) {
    int t, d;
    cin >> t >> d;


    int horarioSaidaCaixa = -caixas.top();
    caixas.pop();


    if(horarioSaidaCaixa > t + 20)
      pessoasComTempoMaiorQueVinte++;


    caixas.push(-(max(horarioSaidaCaixa, t) + d));

  }

  cout << pessoasComTempoMaiorQueVinte << endl;

}
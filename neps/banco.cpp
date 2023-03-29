#include <bits/stdc++.h>

using namespace std;


int main () {
  int c, n;

  queue<pair<int, int>> filaPessoas;
  priority_queue<int> caixas;

  cin >> c >> n;

  for(int i = 0; i < n; i++) {
    int t, d;
    cin >> t >> d;

    filaPessoas.push({t, d});
  }
  int pessoasComTempoMaiorQueVinte = 0;

  while(!filaPessoas.empty() && caixas.size() < c) {
    pair<int, int> item = filaPessoas.front();
    filaPessoas.pop();
    caixas.push(-(item.first + item.second));
  }

  while(!filaPessoas.empty()) {
    pair<int, int> pessoa = filaPessoas.front();
    filaPessoas.pop();


    // cout << "(proximo da fila) entrada na fila: " << pessoa.first << " demora para atender: " << pessoa.second << endl; 
    int horarioSaidaCaixa = -caixas.top();
    caixas.pop();


    // cout << "(saindo do caixa) saida do caixa: " << pessoaSaindoDoCaixa.first << " quando entrou na fila: " << pessoaSaindoDoCaixa.second << endl; 

    if(abs(horarioSaidaCaixa - pessoa.first) > 20)
      pessoasComTempoMaiorQueVinte++;

    
    caixas.push(-(horarioSaidaCaixa + pessoa.second));

  }

  cout << pessoasComTempoMaiorQueVinte << endl;

}
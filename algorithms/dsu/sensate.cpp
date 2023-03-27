#include <bits/stdc++.h>

#define MAX 101010

using namespace std;

unordered_map<string, int> pessoas;

int pai[MAX], peso[MAX], temMaiorQueCinco[MAX], nivelp[MAX];


void init() {
  for(int i = 0; i < MAX; i++) {
    pai[i] = i;
    peso[i] = 0;
    nivelp[i] = 0;
    temMaiorQueCinco[i] = 0;
  }
}

int find(int a) {
  if(pai[a] == a)
    return a;

  return pai[a] = find(pai[a]);
}

void join(int a, int b) {
  int x = find(a), y = find(b);

  if (x == y)
    return;

  if(peso[x] < peso[y]) {
    pai[x] = y;
    temMaiorQueCinco[y] |= temMaiorQueCinco[x];
  }

  if(peso[y] < peso[x]) {
    pai[y] = x;
    temMaiorQueCinco[x] |= temMaiorQueCinco[y];
  }

  if(peso[y] == peso[x]) {
    peso[x] = y;
    temMaiorQueCinco[y] |= temMaiorQueCinco[x];
    peso[y]++;
  }
}

int main() {
  int n, m, q;
  init();
  cin >> n >> m >> q;

  for(int i = 0; i < n; i++) {
    string nome;
    int nivel;
    cin >> nome >> nivel;
    pessoas[nome] = i;
    if(nivel > 5)
      temMaiorQueCinco[i] = 1;
    nivelp[i] = nivel;
  }

  for(int i = 0; i < m; i++) {
    string n1, n2;
    cin >> n1 >> n2;

    join(pessoas[n1], pessoas[n2]);
  }

  for(int i = 0; i < q; i++) {
    string n1;

    cin >> n1;

    int indicePessoa = pessoas[n1]; 
    int conjuntoPessoa = find(indicePessoa);
    

    //n é sensate, ou tem nivel maior igual a 5, ou não tem no grupo alguem com nivel maior q 5
    if(indicePessoa == conjuntoPessoa || nivelp[indicePessoa] > 5 || temMaiorQueCinco[conjuntoPessoa] == 0) {
      cout << "S" << endl;
    } else
      cout << "N" << endl;
  }
}
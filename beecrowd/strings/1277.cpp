#include <bits/stdc++.h>
#define MAX 110
using namespace std;

typedef struct {
  string nome;
  float freq;
} Estudante;

Estudante estudantes[MAX];



void init() {
  for(int i = 0; i < MAX; i++) {
    estudantes[i] = {"", 0};
  }
}

float calculaFreq(string presenca) {
  float total = 0;
  int qnt = 0;
  for(char p : presenca) {
    if(p == 'P') total++;
    qnt++;
    if(p == 'M') qnt--;
  }
  return total/(float)qnt;
}

int main() {
  int t; cin >> t;
  while(t--) {
    init();
    int n;
    string presenca;
    string nome;
    cin >> n;
    for(int i = 0; i < n; i++) {
      cin >> estudantes[i].nome;
    }
    for(int i = 0; i < n; i++) {
      cin >> presenca;
      estudantes[i].freq = calculaFreq(presenca);
    }
    for(int i = 0, cont = 0; i < n; i++) {
      if(estudantes[i].freq < 0.75) {
        if(cont != 0) cout << " ";
        cout << estudantes[i].nome;
        cont++;
      }
    }
    cout << endl;
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int n, t, tempos[110], pontos[110], tab[610];


int solve(int tempoMax) {
  if(tempoMax < 0)
    return tab[tempoMax] = 0;

  if(tab[tempoMax] != -1)
    return tab[tempoMax];

  int maxValue = 0;
  for(int i = 0; i < n; i++) {
    if(tempoMax >= tempos[i]) {
      maxValue = max(maxValue, pontos[i] + solve(tempoMax - tempos[i]));
    }
  }

  return tab[tempoMax] = maxValue;
}

int main() {
  int insts = 1;
  while(true) {
    cin >> n >> t;

    if(!n)
      break;

    memset(tab, -1, sizeof(tab));

    for(int i = 0; i < n; i++)
      cin >> tempos[i] >> pontos[i];

    int sol = solve(t);

    cout << "Instancia " << (insts++) << endl;
    cout << sol << endl << endl;

  }
  
  return 0;
}
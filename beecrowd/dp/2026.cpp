#include <bits/stdc++.h>

using namespace std;

int p, w, enfeites[110], pesos[110], tab[110][1010];

int solve(int obj, int pesoMax) {
  if(tab[obj][pesoMax] != -1)
    return tab[obj][pesoMax];

  if(obj == p || pesoMax < 0)
    return tab[obj][pesoMax] = 0;

  int naoPegoCaixa = solve(obj + 1, pesoMax);

  if(pesoMax >= pesos[obj]) {
    int pegoCaixa = enfeites[obj] + solve(obj + 1, pesoMax - pesos[obj]);


    return tab[obj][pesoMax] = max(naoPegoCaixa, pegoCaixa);
  }


  return tab[obj][pesoMax] = naoPegoCaixa;
}

int main() {
  int g;
  cin >> g;
  for(int gi = 1; gi <= g; gi++) {
    memset(tab, -1, sizeof(tab));

    cin >> p >> w;
    for(int i = 0; i < p; i++)
      cin >> enfeites[i] >> pesos[i];



    int enfeites = solve(0, w);
    printf("Galho %d:\n", gi);
    cout << "Numero total de enfeites: " << enfeites << endl << endl;
  }

  return 0;
}
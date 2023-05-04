#include <bits/stdc++.h>

using namespace std;

int n, c;
int pesos[1001], interesses[1001], jaPeguei[1001];
int pd[1001][100];

int solve(int obj, int peso) {
  if(pd[obj][peso] != -1)
    return pd[obj][peso];

  if(obj == n || peso < 0)
    return pd[obj][peso] = 0;

  
  int valorNaoPego = solve(obj + 1, peso);

  if(peso >= pesos[obj]) {
    int valorPego = interesses[obj] + solve(obj + 1, peso - pesos[obj]);

    return pd[obj][peso] = max(valorNaoPego, valorPego);
  }

  return pd[obj][peso] = valorNaoPego;
}

int main() {
  unsigned int tests = 1;

  while(true) {

    cin >> n >> c;
    if(!n && !c)
      break;

    memset(pd, -1, sizeof(pd));
    memset(jaPeguei, 0, sizeof(jaPeguei));

    for(int i = 0; i < n; i++) {
      cin >> pesos[i] >> interesses[i];
    }
    int sol = solve(0, c);
    cout << "Caso " << tests++ << ": " << sol << endl;
  }


  return 0;
}
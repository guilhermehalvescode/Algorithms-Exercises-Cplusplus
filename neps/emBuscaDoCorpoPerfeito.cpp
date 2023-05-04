#include <bits/stdc++.h>

using namespace std;

int p, n;
unsigned int pesos[2001], valor[2001];
int tab[2001][2001];

int solve(int obj, int peso) {
  if(tab[obj][peso] != -1)
    return tab[obj][peso];

  if(obj == n || peso < 0)
    return tab[obj][peso] = 0;

  int nao_come = solve(obj + 1, peso);

  if(peso >= pesos[obj]) {


    int come = valor[obj] + solve(obj + 1, peso - pesos[obj]);



    return tab[obj][peso] = max(nao_come, come);
  }

  return tab[obj][peso] = nao_come;
}

int main() {
  cin >> p >> n;

  memset(tab, -1, sizeof(tab));

  for(int i = 0; i < n; i++)
    cin >> pesos[i] >> valor[i];
  
  cout << solve(0, p) << endl;


  return 0;
}
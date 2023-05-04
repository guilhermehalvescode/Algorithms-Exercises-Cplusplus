#include <bits/stdc++.h>

using namespace std;

int n, t;
int tamanhos[1001], precos[1001];
int pd[2010];

int solve(int tam) {
  if(tam < 0)
    return 0;

  if(pd[tam] != -1)
    return pd[tam];
  
  int precoMax = 0;
  for(int i = 0; i < n; i++) {
    if(tam >= tamanhos[i])
      precoMax = max(precoMax, precos[i] + solve(tam - tamanhos[i]));
  }

  return pd[tam] = precoMax;
}

int main() {
  cin >> n >> t;

  memset(pd, -1, sizeof(pd));

  for(int i = 0; i < n; i++) {
    cin >> tamanhos[i] >> precos[i];
  }

  cout << solve(t) << endl;

  return 0;
}
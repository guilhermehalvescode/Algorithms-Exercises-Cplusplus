#include <bits/stdc++.h>

using namespace std;


int hanoi(int qnt, int origem, int destino, int aux) {
  int res = 1;

  if(qnt == 1)
    return res;
  else {
    res += hanoi(qnt - 1, origem, aux, destino);
    res += hanoi(qnt - 1, aux, destino, origem);
    return res;
  }
}

int main () {
  int n;
  cin >> n;
  cout << hanoi(n, 0, 1, 2) << endl;
  return 0;
}
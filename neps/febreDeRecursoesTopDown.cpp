#include <bits/stdc++.h>
#define MAX 1010101010
using namespace std;

typedef long unsigned int lui;

lui n, m, k;
lui as[MAX], fks[MAX];


void init() {
  for(lui i = 1; i <= MAX; i++)
    fks[i] = -1;
}

lui pd(lui k) {
  if(fks[k] != -1)
    return fks[k];

  lui sum = 0;
  for(lui i = 1; i <= n; i++) {
    sum += as[i] * pd(k - i);
  }

  return fks[k] = sum % m;
}


int main() {

  cin >> n >> k >> m;

  init();

  for(lui i = 1; i <= n; i++) {
    cin >> as[i];
  }

  for(lui i = 1; i <= n; i++) {
    cin >> fks[i];
  }

  cout << pd(k) << endl;
  
  return 0;
}
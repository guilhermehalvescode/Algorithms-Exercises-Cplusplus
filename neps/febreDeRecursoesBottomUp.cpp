#include <bits/stdc++.h>
#define MAX 10101
using namespace std;

typedef long unsigned int lui;

lui n, m, k;
lui as[MAX], fks[MAX];


void init() {
  for(lui i = 1; i <= MAX; i++)
    fks[i] = -1;
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

  if(k > n) {
    for(lui i = n + 1; i <= k; i++) {
      
      lui sum = 0;
      for(lui j = 1; j <= i; j++) {
        sum += as[j] * fks[i - j];
      }

      fks[i] = sum % m;
    }
  }


  cout << fks[k] << endl;
  
  return 0;
}
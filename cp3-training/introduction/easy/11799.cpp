#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;
  int i = 1;
  while(t--) {
    int n; cin >> n;
    int maior;
    int newMaior;
    cin >> maior; 
    for(int i = 0; i < n - 1; i++) {
      cin >> newMaior;
      maior = newMaior > maior ? newMaior : maior;
    }
    printf("Case %d: %d\n", i++, maior);
  }
  return 0;
}
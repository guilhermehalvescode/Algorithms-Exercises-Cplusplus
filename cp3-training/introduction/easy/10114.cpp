#include <bits/stdc++.h>
#define max 110

using namespace std;

int months, dr;
float dp, amount, carPrice;
float taxes[max];


void init() {
  memset(taxes, 0, sizeof(taxes));
  carPrice = amount + dp;
}

int main() {
  while(true) {
    cin >> months >> dp >> amount >> dr;
    if(months < 0) return 0;
    init();
    float percent;
    int i, indx;
    for(i = 0; i < dr; i++) {
      cin >> indx >> percent;
      taxes[indx] = percent;
    }
    for(i = 0; i <= months; i++) {
      printf("tax[%d]: %f\n", i, taxes[i]);
      if(taxes[i] == 0 && i > 0) {

        carPrice *= 1 - (taxes[i] = taxes [i - 1]);
        printf("valCarro: %f, percent: %f\n", carPrice, 1-taxes[i]);
      } else {
        printf("valCarro: %f, percent: %f\n", carPrice, 1-taxes[i]);
        carPrice *= 1 - taxes[i];
      }
      
      amount -= dp;
      cout << carPrice << " " << amount << endl;
      if(carPrice < amount) break;
    }
    printf("%d month%s", i - 1, (i - 1) == 1 ? "\n" : "s\n");
  }
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
  int participants, budget, hotels, weeks;
  while(scanf("%d %d %d %d", &participants, &budget, &hotels, &weeks) != EOF) {
    int price, cost = budget + 1;
    for(int i = 0; i < hotels; i++) {
      int newCost;
      scanf("%d", &price);
      newCost = participants * price;
      for(int j = 0; j < weeks; j++) {
        int bed;
        scanf("%d", &bed);
        if(bed >= participants && newCost < cost)
          cost = newCost;
      }

    } 
    if(cost > budget)
        printf("stay home\n");
      else 
        printf("%d\n", cost);
  }
  return 0;
}
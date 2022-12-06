#include <bits/stdc++.h>
#define MAX 210
using namespace std;

int n;
int dados[MAX][11];

int main() {
  int i = 1;
  while(true) {
    cin >> n;
    if(n == 0) break;
    for(int i = 0; i < MAX; i++) {
      for(int j = 0; j < 11; j++) {
        dados[i][j] = 0; 
      }
    }
    int x, y, tot = 0, pes = 0;
    for(int i = 0; i < n; i++) {
      cin >> x >> y;
      dados[y/x][x]++; 
      pes += x;
      tot += y;
    }
    if(i != 1) printf("\n");
    cout << "Cidade# " << i++ << ":" << endl;
    int first = 1;
    for(int i = 0; i <= MAX; i++) {
      int sum = 0, has = 0;
      for(int j = 1; j <= 10; j++) {
        if(dados[i][j]) {
          while(dados[i][j]--) {
            sum += j;
            has = 1;
          }
        }
      }
      
      if(has) {
        if(!first) printf(" ");
        else first = 0;
        printf("%d-%d", sum, i);
      } 
        
    }
    float average = (tot/(float)pes);
    float removePart = ((average * 100) - (int)(average * 100)) * 0.01;
    printf("\nConsumo medio: %.2f m3.\n", average - removePart);
  }


  return 0;
}
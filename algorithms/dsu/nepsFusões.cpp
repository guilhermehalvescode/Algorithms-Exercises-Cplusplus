#include <bits/stdc++.h>
#define MAX 100010

using namespace std;

int pai[MAX], peso[MAX], N, K;


void init() {
  for(int i = 0; i < N; i++) {
    pai[i] = i;
    peso[i] = 0;
  }
  
}

int find(int a) {

  if(pai[a] == a)
    return a;

  return pai[a] = find(pai[a]);

}


void join(int a, int b) {

  int x = find(a), y = find(b);

  if(x == y)
    return;

  if(peso[x] < peso[y]) {
    pai[x] = y;
  }

  if(peso[x] > peso[y])
    pai[y] = x;

  if(peso[x] == peso[y]) {

    pai[x] = y;

    peso[y]++;
  }

}


int main() {
  cin >> N >> K;
  init();
  char c;
  int a, b;
  for(int i = 0; i < K; i++) {
    cin >> c >> a >> b;

    if(c == 'C') {

      if(find(a) == find(b))
        cout << "S";
      else
        cout << "N";

      cout << endl;

    } else 
      join(a, b);




  }

  return 0;
}
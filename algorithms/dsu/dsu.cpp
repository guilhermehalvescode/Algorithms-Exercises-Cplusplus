#include <bits/stdc++.h>

using namespace std;
#define N 101010


int n, conjunto[N];
vector <int> lista[N]; //listas dos elementos do conjunto


void init() {
  for(int i = 0; i < n; i++) {
    conjunto[i] = i;
    lista[i] = {i};
  }
}

//retorna o elemento do conjunto a
int find(int a) {
  return conjunto[a];
}

//une o conjunto de dois elementos
void join(int a, int b) {
  //a e b estão no mesmo conjunto
  if(find(a) == find(b))
    return;

  int x = find(a), y = find(b);
  if(lista[x].size() < lista[y].size()) {
    swap(x, y); //otimização: cai de O(N²) para O(nlogn)
  }


  while(lista[y].size()) {
    int elem = lista[y].back();
    lista[y].pop_back();

    lista[x].push_back(elem);
    conjunto[elem] = x;
  }
}

int main () {
  scanf("%d", &n);

  init();

  int m, a, b;
  scanf("%d", &m);
  for(int i = 0; i < m; i++) {
    scanf("%d %d", a, b);
    join(a, b);
  }

  return 0;
}
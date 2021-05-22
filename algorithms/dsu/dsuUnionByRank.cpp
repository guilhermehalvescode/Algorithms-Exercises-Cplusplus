#include <bits/stdc++.h>

#define N 101010

using namespace std;


//vetor de ranks para ter a quantidade de elementos nas árvores, sendo que os índices correspondem as raízes das árvores
int n, m, pai[N], rk[N]; 



int find(int a) {
  return pai[a] == a ? a : find(pai[a]);
}

/* 
Cada união é uma árvore e ao usar o union, faz com que a árvore com menor quantidade de elementos
se torne sub árvore da outra, portanto a árvore só pode ter uma altura máxima de log n
*/
void join(int a, int b) {
  int x = find(a);
  int y = find (b);
  if(x == y) return; // mesmos componentes
   
  if(rk[x] < rk[y]) swap(x, y); //y vai ter o menor componente
  pai[y] = x; //y se torna filha de x
  rk[x] += rk[y]; 
}

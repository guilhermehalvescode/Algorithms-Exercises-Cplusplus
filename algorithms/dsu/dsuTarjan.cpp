#include <bits/stdc++.h>

#define N 101010

using namespace std;
//Tarjan provou que a complexidade da dsu ao usar Path Compress e Union by Rank se aproxima de O(N)

//vetor de ranks para ter o comprimento máximo de elementos na árvore, sendo que os índices correspondem as raízes das árvores
int n, m, pai[N], rk[N]; 


/* 
Cada união é uma árvore e ao usar o find, faz todos os nós das subárvores 
apontarem para a raiz (comprimindo o caminho na arvoré / Path Compression)  
*/
int find(int a) {
  return pai[a] == a ? a : pai[a] = find(pai[a]);
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
  rk[x] += rk[y]; //Soma a quantidade de elem de y à x pois a menor(y) foi incorporada a x
}

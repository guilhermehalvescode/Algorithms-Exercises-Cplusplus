#include <bits/stdc++.h>

#define N 101010

using namespace std;

int n, m, pai[N];


/* 
Cada união é uma árvore e ao usar o find, faz todos os nós das subárvores 
apontarem para a raiz (comprimindo o caminho na arvoré / Path Compression)  
*/
int find(int a) {
  return pai[a] == a ? a : pai[a] = find(pai[a]);
}

void join(int a, int b) {
  pai[find(a)] = find(b);
}

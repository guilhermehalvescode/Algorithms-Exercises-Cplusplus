#include <bits/stdc++.h>
#define MAX 101010

using namespace std;

int pai[MAX];
int peso[MAX];

int find(int x) {
  
  if(pai[x] == x)
    return x;
  
  return pai[x] = find(pai[x]);
}

// função join otimizada
void join(int x, int y){ // ela recebe os elementos a serem unidos
    
    // como só vamos unis os patriaarcas só precisamos trabalhar com eles
    // e fazemos caa um dos elementos receber o valor de sue patriarca
    x=find(x);
    y=find(y);
    
    // agora x e y são os patriarcas dos conjuntos que desejamos unir
    
    // se eles forem o mesmo patriarca
    if(x==y){
        return; // então os conjuntos já estão unidos e retornamos
    }
    
    // se um dos dois patriarcas tiver peso menor, faço ele ser filho do outro
    if(peso[x] < peso[y]){
        pai[x]=y;
    }
    
    if(peso[x] > peso[y]){
        pai[y]=x;
    }
    
    // se os dois tiverem o mesmo peso
    if(peso[x]==peso[y]){
        
        // escolho um para ser o novo patriarca
        pai[x]=y;
        
        // e guardo que seu peso aumentará um uma unidade
        peso[y]++;
    }
}
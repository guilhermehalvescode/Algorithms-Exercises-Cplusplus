#include <bits/stdc++.h>

using namespace std;

char mapa[510][510]; // grafo
int seen[510][510]; // marcar vertices ja visitados
char forca;
int n, f;


void dfs(pair <int, int> posicao) {
    int i = posicao.first, j = posicao.second;
    seen[i][j] = 1;
    if(mapa[i + 1][j] <= forca && !seen[i + 1][j] && i != n ){ // look down
        mapa[i + 1][j] = '*';
        posicao = {i + 1, j};
        dfs(posicao);
    }

    if(mapa[i - 1][j] <= forca && !seen[i - 1][j] && i != 1){ //look up
        mapa[i - 1][j] = '*';
        posicao = {i - 1, j};
        dfs(posicao);
    }

    if(mapa[i][j + 1] <= forca && !seen[i][j + 1] && j != n){ //look right
        mapa[i][j + 1] = '*';
        posicao = {i, j + 1};
        dfs(posicao);
    }
    if(mapa[i][j - 1] <= forca && !seen[i][j - 1] && j != 1){ //look left
        mapa[i][j - 1] = '*';
        posicao = {i, j - 1};
        dfs(posicao);
    }
}

int main() {
    cin >> n >> f;
    forca = f + '0';
    cin.ignore();
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            cin >> mapa[i][j];           // le mapa
        }
    }

    // o mapa é uma grafo
    pair <int, int> inicio = {1, 1};
    if(mapa[1][1] <= forca){
        mapa[1][1] = '*';
        dfs(inicio);
    }
    
    printf("\n"); // só para separar

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++){
            printf("%c", mapa[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}
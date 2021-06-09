#include <bits/stdc++.h>
#define N 10101
#define inf 1010101

using namespace std;
int estatuas, destino, dist, peso;
vector <pair<int, int>> graph[N];
vector <pair<int, int>> jaCalculados;


ofstream on("output.txt");
int dfsDist(int u, int pai) {
    dist = 0;
    for(pair<int, int> edge: graph[u]) {
        int v = edge.first, peso = edge.second;
        if(v == pai) continue;
        if(v == destino) break;
        dist += dfsDist(v, u);
    }
    return peso;
}

void limpa() {
    for(int i = 1; i <= estatuas; i++) {
        graph[i].clear();
    }
    jaCalculados.clear();
}

bool visitado(int indiceI, int indiceJ) {
    for(int i = 0; i < jaCalculados.size(); i++) {
        if(jaCalculados[i].second == indiceI && jaCalculados[i].first == indiceJ)
            return true;
    }
    return false;
}
int main() {
    int testes; cin >> testes;
    while (testes--){
        cin >> estatuas;
        limpa();
        int a, b, c;
        for(int i = 0; i < estatuas - 1; i++) {
            cin >> a >> b >> c;
            graph[a].push_back({b, c});
            graph[b].push_back({a, c});
        }
        
        int soma = 0;
        for(int i = 1; i <= estatuas; i++) {
            for(int j = 1; j <= estatuas; j++) {
                if(!visitado(i, j)) {
                    destino = j;
                    printf("\nQuero distancia de %d ate %d!\n", i, j);
                    dfsDist(i, 0);
                    printf("Distancia de %d\n", dist);
                    soma += dist;
                    jaCalculados.push_back({i, j});
                }
            }
        }
        on << soma % 1300031 << endl;
    }
    return 0;
}
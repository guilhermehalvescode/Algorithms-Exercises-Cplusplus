#include <bits/stdc++.h>

using namespace std;

#define n 1000

int arestas, vertices, seen[n];
vector <int> adjacencyList[n];
int adjacencyMatrix[n][n];

void BFS(int start){
    memset(seen, 0, sizeof(seen));
    queue<int> q;
    seen[start] = 1;
    q.push(start);

    while(!q.empty()){
        int u = q.front(); q.pop();
        cout << "Estou no vertice " << u << endl;

        for(auto v: adjacencyList[u]){
            if(seen[v]) continue;
            seen[v] = 1;
            q.push(v);
        } 
    }
}

void DFS(int vertice){
    seen[vertice] = 1;
    cout << "Estou no vertice " << vertice << endl;
    for(auto v: adjacencyList[vertice]){
        if(seen[v]) continue;
        DFS(v);
    } 
}

int main(){
    cin >> arestas >> vertices;

    int u, v;
    for(int i = 0; i < arestas; i++){
        cin >> u >> v;
        adjacencyMatrix[u][v] = 1;
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }
    int start; cin >> start;
    BFS(start);
    cout << "\n\n";
    memset(seen, 0, sizeof(seen));
    DFS(start);




    return 0;
}

//BFS and DFS in a adjacency list - use visual graph to understand the difference between DFS and BFS
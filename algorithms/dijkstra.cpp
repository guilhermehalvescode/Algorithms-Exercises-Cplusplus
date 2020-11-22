#include <bits/stdc++.h>

using namespace std;

#define N 101010
#define inf 10101010

typedef pair<int, int> ii;

int n, m, distancia[N], pai[N];//n = vertices, m = arestas
vector<ii> adj[N];// lista de adj para grafos ponderados
vector<int> tree[N];// árvore de menor caminho

// assume um grafo com pesos positivos nas arestas
void dijkstra(int start) {
	
	for(int i=0; i<n; i++) {//percorra todos os vértices do grafo
		distancia[i] = inf;//inf deve ser um número bem grande, além dos valores possíveis para as arestas
		pai[i] = i;
	}
	
	priority_queue<ii, vector<ii>, greater<ii>> pq;//fila de prioridade, ordenada crescente
	distancia[start] = 0;
	pq.push(ii(distancia[start], start));

	while(!pq.empty()) { // enquanto tiver elemento na fila
		ii top = pq.top(); pq.pop(); //remove o topo da fila
		
		int distU = top.first;
		int u = top.second;
		
		if(distancia[u] < distU) { //vértice u ja foi visitado antes
			continue;
		}

		//process u
		printf("Dijkstra: visitei o %d! distancia = %d\n", u, distancia[u]);
		//

		for(ii edge : adj[u]) {
			int v = edge.first, pesoAresta = edge.second;
			if(distU + pesoAresta < distancia[v]) {
				distancia[v] = distU + pesoAresta;
				pai[v] = u;//u pode ser pai de v na árvore de menores caminhos
				pq.push(ii(distU + pesoAresta, v));	
			}
		}
	}

	for(int i=0; i<n; i++) {
		if(i!=pai[i]) {
			tree[pai[i]].push_back(i); // cria a árvore de menor caminho
		}
	}
	// array distancia contem o menor caminho para ir de "start" até todos os outros vértices alcançáveis
	// tree[] é a árvore de menor caminho gerada a partir do algoritmo de dijkstra
}

//dfs em uma árvore enraizada
void dfsTree(int u, int p) {

	printf("DFS: vertice %d, distancia %d\n", u, distancia[u]);
	
	for(int v : tree[u]) {
		if(v == p) {
			continue;
		}
		dfsTree(v, u);
	}
}

int main() {

	scanf("%d %d", &n, &m);

	int a, b, c;
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &a, &b, &c);
		adj[a].push_back(ii(b, c));
		adj[b].push_back(ii(a, c));
	}

	dijkstra(0);
	dfsTree(0, 0);
}
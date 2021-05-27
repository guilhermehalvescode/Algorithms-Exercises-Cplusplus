#include <bits/stdc++.h>

using namespace std;

#define N 101010
#define LOG 22

int n, h[N], pai[N], lca[N][LOG];
vector<int> adj[N];

void dfs(int u, int p) { //O(NlogN)

	pai[u] = p;
	h[u] = h[p]+1;

	/*
		ao chegar em u, todos os ancestrais ja foram calculados
	*/

	lca[u][0] = pai[u];
	//lca[u][k] = lca[ lca[u][k-1] ][k-1];
	for(int k=1; k<LOG; k++) {
		lca[u][k] = lca[ lca[u][k-1] ][k-1];
	}

	for(int v : adj[u]) {
		if(v == p) continue;
		dfs(v, u);
	}
}

int getLCA(int u, int v) { //O(logN)

	if(h[u] < h[v]) {
		swap(u,v); //garante u sendo o mais baixo na arvore
	}

	//sobe o u d passos na árvore
	int d = h[u]-h[v];
	for(int i=LOG-1; i>=0; i--) {
		if(d&(1<<i)) { // potencia 2^i compoe d
			u = lca[u][i];
		}
	}

	// altura de u e v é igual nesse ponto
	if(u == v) {
		return u;
	}

	// tenta os pulos em ordem decrescente de tamanho
	for(int i=LOG-1; i>=0; i--) {
		if(lca[u][i] != lca[v][i]) { //pulo nao ultrapassa o LCA
			u = lca[u][i];
			v = lca[v][i];
		}
	}

	// u e v sao filhos diretos do lca
	return pai[u];
}



int getLcaSol1(int u, int v) { // O(n)
	while(u!=v) {
		if(h[u] < h[v]) {
			swap(u, v);
			//u sempre vai ser o mais baixo
		}
		u = pai[u];
	}
	return u;
}



int main() {

	scanf("%d", &n);
	int a, b;
	for(int i=1; i<n; i++) {
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	dfs(1, 0);

	int q;
	scanf("%d", &q);
	while(q--) {
		scanf("%d %d", &a, &b);
		printf("LCA(%d, %d) = %d\n", a, b, getLCA(a, b));
	}
}
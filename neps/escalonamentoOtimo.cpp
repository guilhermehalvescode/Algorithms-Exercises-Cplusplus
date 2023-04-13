#include <bits/stdc++.h>
#define MAX 50010

using namespace std;

vector<int> graph[MAX];
int grau[MAX];

priority_queue<int, vector<int>, greater<int>> tarefas;

int main() {
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < n; i++) {
    grau[i] = 0;
  }

  for(int i = 0; i < m; i++) {
    int a, b;

    cin >> a >> b;

    graph[a].push_back(b);
    grau[b]++;
  }

  for(int i = 0; i < n; i++) {
    if(grau[i] == 0)
      tarefas.push(i);
  }

  vector<int> tarefasRealizadas;
  while(!tarefas.empty()) {
    int tarefa = tarefas.top();
    tarefas.pop();
    tarefasRealizadas.push_back(tarefa);

    for(int viz : graph[tarefa]) {
      grau[viz]--;

      if(grau[viz] == 0)
        tarefas.push(viz);
    }
  }

  if(tarefasRealizadas.size() != n) 
    cout << "*" << endl;
  else {
    for(int tarefa : tarefasRealizadas) {
      cout << tarefa << endl;
    }
  }

  return 0;
}
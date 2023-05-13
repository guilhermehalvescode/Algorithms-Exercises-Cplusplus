#include <bits/stdc++.h>
#define MAX 21

using namespace std;

int visitei[MAX], cont[MAX];
vector<int> graph[MAX];


int main() {
  int n;
  cin >> n;

  for(int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;

  
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for(int i = 0; i < n; i++) {
    if(graph[i].size() == n - 1)
      cout << i << endl;
  }


  return 0;
}
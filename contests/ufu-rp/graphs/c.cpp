#include <bits/stdc++.h>
#define MAX 61

using namespace std;

int comp[MAX], ranq[MAX];
int r, c;
vector<pair<int, pair<int, int>>> edges;


void init() {
  for(int i = 0; i < MAX; i++) {
    comp[i] = i;
    ranq[i] = 0;
  }

}

int find(int a) {
  if(comp[a] == a)
    return a;

  return comp[a] = find(comp[a]);
}

void join(int a, int b) {
  int x = find(a), y = find(b);

  if(x == y)
    return;

  if(ranq[x] < ranq[y]) {
    comp[x] = y;
  } else if(ranq[y] < ranq[x]) {
    comp[y] = x;
  } else {
    comp[x] = y;
    ranq[y]++;
  }
}

int kruskal() {
  sort(edges.begin(), edges.end());
  int val = 0;

  for(auto edge: edges) {
    pair<int, int> e = edge.second;
    if(find(e.first) != find(e.second)) {
      val += edge.first;
      join(e.first, e.second);
    }
  }

  return val;
}

int main() {
  cin >> r >> c;
  init();

  for(int i = 0; i < c; i++) {
    int p, a, b;
    cin >> a >> b >> p;
    edges.push_back(make_pair(p, make_pair(a, b)));
    edges.push_back(make_pair(p, make_pair(b, a)));
  }


  cout << kruskal() << endl;


  return 0;
}
#include <bits/stdc++.h>
#define MAX 100

using namespace std;


int n;
vector <int> table[MAX];

void init() {
  for(int i = 0; i < MAX; i++) {
    table[i].clear();
  }
}

int hashKey(int key) {
  return key % n;
}

int main () {
  int t, c; cin >> t;
  bool first = true;
  while(t--) {
    int val;
    init();
    if(!first) cout << endl;
    first = false;
    cin >> n >> c;
    while(c--) {
      cin >> val;
      table[hashKey(val)].push_back(val);
    }

    for(int i = 0; i < n; i++) {
      cout << i;
      for(int item : table[i]) {
        cout << " -> " << item;
      }
      cout << " -> \\" << endl;
    }
  }

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

bool mycomp(string a, string b) {
  int aSize = a.size(), bSize = b.size(), i;
  if(aSize > bSize) swap(aSize, bSize);

  for(i = 0; a[i] == b[i] && i < aSize; i++);

  if(a[i] != b[i]) 

  return a < b;
}

int main() {
  int t; cin >> t;
  string perm, nPerm;
  vector <string> perms;
  while(t--) {
    cin >> perm;
    nPerm = perm;
    do {
      perms.push_back(nPerm);
      next_permutation(nPerm.begin(), nPerm.end());
    } while(nPerm != perm);
    sort(perms.begin(), perms.end(), mycomp);
    for(int i = perms.size() - 1; i >= 0; i--) {
      cout << perms[i] << endl;
    }
    perms.clear();
  }
  return 0;
}
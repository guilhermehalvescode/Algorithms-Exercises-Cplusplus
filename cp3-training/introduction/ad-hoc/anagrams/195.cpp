#include <bits/stdc++.h>

using namespace std;

bool mycomp(string a, string b) {
  // for(int i = 0; i < a.size(); i++) 
  //   a[i] = tolower(a[i]);
  
  // for(int i = 0; i < b.size(); i++) 
  //   a[i] = tolower(b[i]);
  
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
    for(string c : perms) {
      cout << c << endl;
    }
    perms.clear();
  }
  return 0;
}
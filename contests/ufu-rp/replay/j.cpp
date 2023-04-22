#include <bits/stdc++.h>

using namespace std;

int checkSub(string a, string b) {
  if(b.size() > b.size()) 
    return 0;

  for(int i = 0; i < a.size(); i++) {
    
    if(a[i] == b[0]) {
      int j;
      for(j = 0; j < b.size() && i + j < a.size() && a[i + j] == b[j]; j++);

      if(j == b.size())
        return 1;
    }

  }

  return 0;
}

int main () {
  string strMaior;
  cin >> strMaior;

  int n;
  cin >> n;

  cin.ignore();

  for(int tests = 0; tests < n; tests++) {
    string sub;
    cin >> sub;

    cout << checkSub(strMaior, sub) << endl;
  }




  return 0;
}
#include <bits/stdc++.h>

typedef long unsigned int lu;

using namespace std;

bool cmp(pair<char, int>& a, pair<char, int>& b) {
  if(a.second == b.second)
    return a.first < b.first;

  return a.second > b.second;
}

int main() {
  map<char, int> letras;
  string a;

  int n;
  cin >> n;
  cin.ignore();

  for(int i = 0; i < n; i++) {
    getline(cin, a);

    for(char c : a) {
      if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        if(letras.find(toupper(c)) != letras.end()) {
          letras[toupper(c)]++;
        } else
          letras[toupper(c)] = 1;
      }

    }
  }

  vector<pair<char, int>> valores;

  for(auto valor : letras) {
    valores.push_back(valor);
  }

  sort(valores.begin(), valores.end(), cmp);

  for(auto item : valores) {
    cout << item.first << " " << item.second << endl;
  }


  return 0;
}
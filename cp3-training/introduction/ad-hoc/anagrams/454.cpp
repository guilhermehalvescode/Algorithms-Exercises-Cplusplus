#include <bits/stdc++.h>

using namespace std;

map <string, pair<string, set<string>>> anagrams;

int main() {
  int t; cin >> t; string lixo;
  getchar(); 
  getchar(); 
  while(t--) {
    string line, anagram;
    while(getline(cin, line)) {
      if(line == "") break;
      for(char c : line) {
        if(isalpha(c))
          anagram.push_back(tolower(c));
      }
      sort(anagram.begin(), anagram.end());
      cout << anagram << " <- anagram" << endl;
      if(anagrams.find(anagram) == anagrams.end()) {
        anagrams[anagram].first = line;
      } else {
        anagrams[anagram].second.insert(line);
      }
      line.clear();
      anagram.clear();
    }
    for(auto ana : anagrams) {
      pair<string, set<string>> anagram = ana.second;
      for(auto line : anagram.second) {
        cout << anagram.first << " = " << line << endl;
      }
    }
    anagrams.clear();
  }
  return 0;
}
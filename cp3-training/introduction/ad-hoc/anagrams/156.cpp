#include <bits/stdc++.h>

using namespace std;

map <string, pair<int, string>> ananagrams;


int main() {
  string anagram, lower;
  while(true) {
    cin >> anagram;
    if(anagram == "#") break;
    for(int i = 0; i < anagram.size(); i++) {
      lower.push_back(tolower(anagram[i]));
    }
    
    sort(lower.begin(), lower.end());
    if(ananagrams.find(lower) == ananagrams.end()) {
      ananagrams[lower].first = 1;
      ananagrams[lower].second = anagram;
    } else {
      ananagrams[lower].first++;
    }
    lower.clear();
    anagram.clear();
  }
  set <string> res;
  for(auto ananagram : ananagrams) {
    if(ananagram.second.first == 1) {

      res.insert(ananagram.second.second);
    }
  }
  for(auto name : res) {
    cout << name << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
#define MAX 51
using namespace std;

vector <string> strs;


bool validWord(string word) {
  if(word == ".") return false;
  for(int i = 0; i < word.length(); i++) {
    if(i == word.length() - 1 && word[i] == '.')
      return true;
    else if(!isalpha(word[i]))
      return false;
  }
  return true;
}


int main() {
  string line;
  while(getline(cin, line)) {
    strs.clear();
    stringstream words(line);
    while(words >> line) {
      strs.push_back(line);
    }
    int qnt = 0, tot = 0;
    for(string str : strs) {
      if(validWord(str)) {
        tot += str[str.length() - 1] == '.' ?  str.length() - 1 : str.length();
        qnt++;
      }
    }
    int res = !qnt ? 0 : tot / qnt;
    if(res <= 3) {
      cout << 250;
    } else if(res <= 5) {
      cout << 500;
    } else {
      cout << 1000;
    }
    cout << endl;
  }

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

bool palidrome(string str) {
  int i, j;
  for(i = 0, j = str.length() - 1; str[i] == str[j] && i < ceil(str.length() / 2); i++, j--);
  return i == ceil(str.length() / 2);
}

int main() {
  string palin, temp;
  while(true) {
    getline(cin, temp);
    if(temp == "DONE") return 0;
    for(char c : temp) {
      if(isalpha(c))
        palin.push_back(tolower(c));
    }
    cout << (palidrome(palin) ? "You won't be eaten!" : "Uh oh..") << endl;
    palin.clear();
    temp.clear();
  }
  return 0;
}
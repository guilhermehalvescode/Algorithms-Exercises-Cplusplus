#include <bits/stdc++.h>

using namespace std;




int main () {
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    string str;  
    int c;
    cin >> c >> str;

    for(char l : str) {
      char newChar = l + c;

      if(newChar < 'A')
        newChar += 'Z' - 'A' + 1;
      
      if(newChar > 'Z')
        newChar -= 'Z' - 'A' + 1;

      cout << newChar;
    }
    cout << endl;



  }

  return 0;
}
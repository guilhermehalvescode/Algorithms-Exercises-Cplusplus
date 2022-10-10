#include <bits/stdc++.h>

using namespace std;


bool ehVogal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool evaluateString(string str) {
    int i, j;



  for(i = 0, j = str.length() - 1; i < j;) {
    if(!ehVogal(str[j])) {
      j--;
      continue;
    }

    if(!ehVogal(str[i])) {
      i++;
      continue;
    }
    
    if(str[i] == str[j]) {
      i++; j--;
    } else break;
  }

    return j <= i;

}


int main() {

    string entrada;

    cin >> entrada;

    cout << (evaluateString(entrada) ? 'S' : 'N');
    cout << endl;


    return 0;
}

#include <bits/stdc++.h>

#define MAX 1010
using namespace std;

int c, f, caracs[MAX], desculpes[MAX], tab[MAX][MAX];


int solve(int obj, int caracsMax) {
  if(tab[obj][caracsMax] != -1)
    return tab[obj][caracsMax];

  if(obj == f || caracsMax < 0)
    return tab[obj][caracsMax] = 0;

  int naoPegueiFrase = solve(obj + 1, caracsMax);

  if(caracsMax >= caracs[obj]) {
    int pegueiFrase = desculpes[obj] + solve(obj + 1, caracsMax - caracs[obj]);

    return tab[obj][caracsMax] = max(naoPegueiFrase, pegueiFrase);
  }

  return tab[obj][caracsMax] = naoPegueiFrase;
}




int main() {
  int tests = 1;
  while(true) {
    cin >> c >> f;

    if(!c && !f)
      break;

    memset(tab, -1, sizeof(tab));

    for(int i = 0; i < f; i++)
      cin >> caracs[i] >> desculpes[i];
    

    int sol = solve(0, c);

    // if(tests > 1)
    //   cout << endl;
    cout << "Teste " << (tests++) << endl;
    cout << sol << endl << endl;
  }

  
  return 0;
}
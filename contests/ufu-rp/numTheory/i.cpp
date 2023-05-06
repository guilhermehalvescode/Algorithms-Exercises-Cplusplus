#include <bits/stdc++.h>

using namespace std;

typedef unsigned int ui;

int main() {
  ui n;


  ui num = 1;


  cin >> n;
  ui i;
  for(i = 1; i * (i + 1) * (i + 2) < n; i++);

  if(i * (i + 1) * (i + 2) == n)
    cout << i << " " << i + 1 << " " << i + 2 << endl;
  else
    cout << 0 << endl;
  
  

  return 0;
}
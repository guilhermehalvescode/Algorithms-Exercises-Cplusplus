#include <bits/stdc++.h>

using namespace std;
typedef unsigned int ui;

int main() {
  double a, b;

  while(cin >> a >> b) {
    if(b < a) 
      swap(a, b);

    printf("%.2lf\n", (double) 0.5 * a + b);

  }

  return 0;
}
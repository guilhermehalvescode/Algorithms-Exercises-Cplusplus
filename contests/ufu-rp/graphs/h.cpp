#include <bits/stdc++.h>
#define MAX 50

using namespace std;

int main()
{
  float ft, lesser = 110, bigger = -110;

  while(cin >> ft) {
    if(ft > bigger)
      bigger = ft;
    if(ft < lesser)
      lesser = ft;
  }

  printf("%.1f %.1f\n", lesser, bigger);

  return 0;
}
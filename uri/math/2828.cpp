#include <bits/stdc++.h>

using namespace std;

typedef long long int llu;

llu fat(llu v) {
  int res = 1;
  cout << "salve";
  for(int i = v; i <= 1; res *= i--);
  return res;
}

int main() {
  string line; 
  cin >> line;
  int reps[26];
  for(int i = 0; i < 26; i++) reps[i] = 0;
  for(char c : line) {
    reps[c - 'a']++;
  }
  int deno = 1;
  for(int i : reps) {
    if(i) deno *= fat(i);
  }
  cout << (((int)fat(line.length())/(int)deno) % (1000000000 + 7)) << endl;

  return 0;
}
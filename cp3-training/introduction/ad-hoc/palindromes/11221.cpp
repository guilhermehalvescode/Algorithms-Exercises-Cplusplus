#include <bits/stdc++.h>
#define MAX 110

using namespace std;

int K;
string palin;
char square[MAX][MAX];


bool isMagicSquarePalin() {
  int i, j;
  string first;
  string second;
  string third;
  string fourth;
  for(i = 0; i < K; i++) {
    for(j = 0; j < K; j++) {
      first.push_back(square[i][j]);
      second.push_back(square[j][i]);
      third.push_back(square[K - 1 - i][K - 1 - j]);
      fourth.push_back(square[K - 1 - j][K - 1 - i]);
    }
  }
  return first == second && second == third && third == fourth && K*K == palin.length();
}

void init() {
  K = 0;
  palin.clear();
  for(int i = 0; i < MAX; i++) {
    for(int j = 0; j < MAX; j++) {
      square[i][j] = ' ';
    }
  }
}

int main() {
  int t; cin >> t;
  getchar();
  for(int i = 1; i <= t; i++) {
    init();
    string line;
    getline(cin, line);
    for(char c: line) {
      if(isalpha(c))
        palin.push_back(c);
    }
    K = (int) sqrt(palin.length());
    for(int i = 0; i < K; i++) {
      for(int j = 0; j < K; j++) {
        square[i][j] = palin[(i * K) + j];
      }
    }
    cout << "Case #" << i << ":" << endl;
    if(isMagicSquarePalin())
      cout << K;
    else 
      cout << "No magic :(";
    cout << endl;
  }
  return 0;
}
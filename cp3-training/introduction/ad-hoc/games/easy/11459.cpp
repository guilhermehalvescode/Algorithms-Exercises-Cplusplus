#include <bits/stdc++.h>
#define MAX 1010101

using namespace std;

int a, b, c;
int players[MAX], jumps[100], board[100];

void init() {
  memset(players, 0, sizeof(players));
  for(int i = 0; i < 100; i++) {
    jumps[i] = -1;
    board[i] = -1;
  }
}

int main() {
  int t, src, dest; cin >> t;
  while(t--) {
    init();
    cin >> a >> b >> c;
    while(b--) {
      cin >> src >> dest;
      jumps[src - 1] = dest - 1;
    }
    int player = 0, num, newPos;
    while(c--) {
      cin >> num; 
      if(board[99] == -1) {
        newPos = players[player] + num < 100 ? players[player] + num : players[player];
        while(jumps[newPos] != -1) {
          newPos = jumps[newPos];
        }
        board[newPos] = player;
        players[player] = newPos;
        player = (player + 1) % a; 
      }
    }
    for(int i = 0; i < a; i++) 
      printf("Position of player %d is %d.\n", i + 1, players[i] + 1);
  }

  return 0;
}
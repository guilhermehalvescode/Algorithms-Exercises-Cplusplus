#include <bits/stdc++.h>
#define MAX 1010101

using namespace std;

int a, b, c, player, newPos, num;
int players[MAX], jumps[100], board[100];

void init() {
  memset(players, 0, sizeof(players));
  for(int i = 0; i < 100; i++) {
    jumps[i] = -1;
    board[i] = -1;
  }
}

int main() {
  int cases, src, dest; cin >> cases;
  for(int t = 0; t < cases; t++) {
    init();
    cin >> a >> b >> c;
    while(b--) {
      cin >> src >> dest;
      jumps[src - 1] = dest - 1;
    }
    player = 0;
    board[0] = 0;
    while(c--) {
      cin >> num; 
      if(board[99] == -1) {
        newPos = players[player] + num < 100 ? players[player] + num : 99;
        if(jumps[newPos] != -1) {
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
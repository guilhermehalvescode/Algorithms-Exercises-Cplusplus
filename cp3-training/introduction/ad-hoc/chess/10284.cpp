#include <bits/stdc++.h>
#define B_SIZE 8;
//too tedius
using namespace std;

int board[B_SIZE][B_SIZE];

void init() {
  for(int i = 0; i < B_SIZE; j++) {
    for(int j = 0; j < B_SIZE; j++) {
      board[i][j] = 0;
    }
  }  
}

int main() {
  char c;
  int row = 0, col = 0;
  init();
  while(cin >> c) {
    if(c == '\n') {
      cout << eval() << endl;
      row = 0; col = 0;
      init();
    } else if(isalnum(c)) {
      col += c - '1';
    } else if(c == '/') {
      row++;
    } else if(isalpha(c)) {
      char piece = tolower(c);
      switch (piece) {
        case 'r':
          rook(row, col);
          break;
        case 'k':
          king(row, col);
          break;
        case 'q':
          queen(row, col);
          break;
        case 'p':
          pawn(row, col);
          break;
        case 'b':
          bishop(row, col);
          break;
        default:
          break;
      }
    }
  }
  return 0;
}
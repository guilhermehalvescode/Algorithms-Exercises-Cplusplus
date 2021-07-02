#include <bits/stdc++.h>

using namespace std;

vector <string> cards;

int test() {
  int value, pos = 26, j, y = 0;
  for(int i = 0; i < 3; i++) {
    string card = cards[pos];
    value = isupper(card[0]) ? 10 : card[0] - '0';
    y += value;
    for(j = pos; j >= pos - (10 - value); j--)
      cards.erase(cards.begin() + j);
    pos = j;
  }
  return y;
}

int main() {
  int t, i; cin >> t;
  for(i = 1; i <= t; i++) {
    cards.clear();
    for(int j = 0; j < 52; j++) {
      string card;
      cin >> card;
      cards.push_back(card);
    }
    cout << "Case " << i << ": " << cards[test() - 1] << endl;
  } 
  return 0;
}
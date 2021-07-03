#include <bits/stdc++.h>
using namespace std;
#define MAX 26

int letters[MAX], tries;
bool tried[MAX];

void init()
{
  for (int i = 0; i < MAX; i++)
  {
    letters[i] = 0;
    tried[i] = false; 
  }
  tries = 7;
}

bool win()
{
  for (int c : letters)
  {
    if (c)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int turn;
  string word;
  while (true)
  {
    cin >> turn;
    if (turn == -1)
      return 0;
    init();
    cin >> word;
    for (char c : word)
      letters[c - 'a']++;
    cin >> word;
    for (char c : word)
    {
      // printf("tried[%c] = %d\n", c, tried[c - 'a']);
      if(!tries) break;
      if(tried[c - 'a']) continue;
      if (!letters[c - 'a'])
        tries--;
      else {
        while(letters[c - 'a']) 
          letters[c - 'a']--;
      }
      tried[c - 'a'] = true;
      if(win()) break;
    }
    // cout << "tries: " <<  tries << endl;
    cout << "Round " << turn << endl;
    if (!tries)
    {
      cout << "You lose." << endl;
    }
    else
      cout << (win() ? "You win." : "You chickened out.") << endl;
  }
  return 0;
}
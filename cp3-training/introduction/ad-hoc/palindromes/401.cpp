#include <bits/stdc++.h>

using namespace std;

bool palidrome(string str) {
  int i, j;
  for(i = 0, j = str.length() - 1; str[i] == str[j] && i < ceil(str.length() / 2); i++, j--);
  return i == ceil(str.length() / 2);
}

char table(char c) {
  if(c == 'E')
    return '3';
  else if(c == '3')
    return 'E';
  else if(c == 'J')
    return 'L';
  else if(c == 'L')
    return 'J';
  else if(c == 'S')
    return '2';
  else if(c == '2')
    return 'S';
  else if(c == 'Z')
    return '5';
  else if(c == '5')
    return 'Z';
  else if(c == 'A')
    return 'A';
  else if(c == 'H')
    return 'H';
  else if(c == 'I')
    return 'I';
  else if(c == 'M')
    return 'M';
  else if(c == 'T')
    return 'T';
  else if(c == 'O')
    return 'O';
  else if(c == 'U')
    return 'U';
  else if(c == 'V')
    return 'V';
  else if(c == 'W')
    return 'W';
  else if(c == 'X')
    return 'X';
  else if(c == 'Y')
    return 'Y';
  else if(c == '1')
    return '1';
  else if(c == '8')
    return '8';
  return '*';
}

bool mirrored(string str) {
  string mirror;
  for(int i = str.length() - 1; i >= 0; i--) {
    mirror.push_back(table(str[i]));
  }
  return mirror == str;
}


int main() {
  string str;
  while(cin >> str) {
    bool isPalindrome = palidrome(str), isMirrored = mirrored(str);
    cout << str;
    if(!isPalindrome && !isMirrored) {
      cout << " -- is not a palindrome." << endl;
    } else if(!isPalindrome && isMirrored) {
      cout << " -- is a mirrored string." << endl;
    } else if(isPalindrome && !isMirrored) {
      cout << " -- is a regular palindrome." << endl;
    } else {
      cout << " -- is a mirrored palindrome." << endl;
    }
    cout << endl;
  }

  return 0;
}
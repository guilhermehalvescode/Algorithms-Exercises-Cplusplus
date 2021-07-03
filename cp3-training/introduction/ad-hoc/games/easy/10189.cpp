#include <bits/stdc++.h>
#define MAX 100
#define up(i) i - 1
#define down(i) i + 1
#define l(j) j - 1
#define r(j) j + 1
using namespace std;


int field[MAX][MAX], n, m;

void init()
{
  for (int i = 0; i < MAX; i++)
  {
    for (int j = 0; j < MAX; j++)
    {
      field[i][j] = 0;
    }
  }
}

void print()
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (field[i][j] == -1)
        cout << "*";
      else
        cout << field[i][j];
    }
    cout << endl;
  }
}

void process(int i, int j)
{
  //Upper fields
  if(up(i) >= 0) {
    //Upper left
    if(l(j) >= 0 && field[up(i)][l(j)] != -1)
      field[up(i)][l(j)]++;
    //Upper middle
    if(field[up(i)][j] != -1) field[up(i)][j]++;
    //Upper right
    if(r(j) < m && field[up(i)][r(j)] != -1)
      field[up(i)][r(j)]++;
  } 
  //Bottom fields
  if(down(i) < n) {
    //Bottom left
    if(l(j) >= 0 && field[down(i)][l(j)] != -1)
      field[down(i)][l(j)]++;
    //Bottom middle
    if(field[down(i)][j] != -1) field[down(i)][j]++;
    //Bottom right
    if(r(j) < m && field[down(i)][r(j)] != -1)
      field[down(i)][r(j)]++;
  } 
  //Middle fields
  //Middle left
  if(l(j) >= 0 && field[i][l(j)] != -1)
    field[i][l(j)]++;
  //Middle right
  if(r(j) < m && field[i][r(j)] != -1)
    field[i][r(j)]++;
}


int main()
{
  int x = 1;
  char c;
  while (true)
  {
    cin >> n >> m;
    if (!n && !m)
      return 0;
    init();
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> c;
        if (c == '*')
        {
          field[i][j] = -1;
          process(i, j);
        }
      }
    }
    if(x != 1) 
      cout << endl;
    cout << "Field #" << x++ << ":" << endl;
    print();
  }
  return 0;
}
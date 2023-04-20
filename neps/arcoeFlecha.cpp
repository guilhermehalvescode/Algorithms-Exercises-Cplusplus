#include <bits/stdc++.h>
#define INF 10101010

using namespace std;

int contaInversoes(vector<int> &v)
{
  int inv = 0;

  if (v.size() == 1)
    return 0;

  vector<int> u1, u2;

  for (int i = 0; i < v.size() / 2; i++)
    u1.push_back(v[i]);

  for (int i = v.size() / 2; i < v.size(); i++)
    u2.push_back(v[i]);

  inv += contaInversoes(u1);
  inv += contaInversoes(u2);

  // cout << "u1:" << endl;
  // for(int c : u1)
  //   cout << c << endl;
  // cout << "inv1: " << inv1 << endl;

  
  // cout << "u2:" << endl;
  // for(int c : u2)
  //   cout << c << endl;
  // cout << "inv2: " << inv2 << endl;

  int ind1 = 0, ind2 = 0;

  u1.push_back(INF);
  u2.push_back(INF);


  for (int i = 0; i < v.size(); i++)
  {

    if (u1[ind1] <= u2[ind2])
    {
      v[i] = u1[ind1];
      ind1++;
    }
    else
    {
      v[i] = u2[ind2];
      ind2++;
      inv += u1.size() - ind1 - 1;
    }
  }
  return inv;
}
int main()
{

  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;

    v.push_back(abs(x) + abs(y));
  }
  int tam = n - 1;
  cout << ((tam * (tam+1)) / 2) - contaInversoes(v) << endl;

  // for(int c : v)
  //   cout << c << endl;

  return 0;
}
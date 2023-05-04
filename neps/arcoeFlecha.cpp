#include <bits/stdc++.h>
#define INF 10101010
typedef long long int lli;

using namespace std;

lli contaInversoes(vector<lli> &v)
{
  lli inv = 0;

  if (v.size() == 1)
    return 0;

  vector<lli> u1, u2;

  for (lli i = 0; i < v.size() / 2; i++)
    u1.push_back(v[i]);

  for (lli i = v.size() / 2; i < v.size(); i++)
    u2.push_back(v[i]);

  inv += contaInversoes(u1);
  inv += contaInversoes(u2);

  lli ind1 = 0, ind2 = 0;

  u1.push_back(-INF);
  u2.push_back(-INF);


  for (lli i = 0; i < v.size(); i++)
  {

    if (u1[ind1] > u2[ind2])
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

  lli n;
  cin >> n;

  vector<lli> v;
  for (lli i = 0; i < n; i++) 
  {
    lli x, y;
    cin >> x >> y;

    v.push_back(abs(x) + abs(y));
  }



  cout << contaInversoes(v) << endl;

  return 0;
}
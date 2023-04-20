#include <bits/stdc++.h>
#define INF 1010101


using namespace std;

int contaInversoes(vector<int> &v) {
  
  int inv = 0;

  if(v.size() == 1)
    return 0;


  vector<int> u1, u2;

  for(int i = 0; i < v.size()/2; i++)
    u1.push_back(v[i]);

  for(int i = v.size() / 2; i < v.size(); i++)
    u2.push_back(v[i]);

  // for(auto c : u1)
  //   cout << c << endl;

  // cout << endl;

  // for(auto c : u2)
  //   cout << c << endl;


  inv += contaInversoes(u1);
  inv += contaInversoes(u2);

  int ind1 = 0, ind2 = 0;

  u1.push_back(INF);
  u2.push_back(INF);

  for(int i = 0; i < v.size(); i++) {

    if(u1[ind1] <= u2[ind2]) {
      v[i] = u1[ind1];
      ind1++;
    } else {
      v[i] = u2[ind2];
      ind2++;

      inv += u1.size() - ind1 - 1;
    }
  }

  return inv;
}



int main () {
  int n;
  cin >> n;

  vector<int> vet;

  for(int i = 0; i < n; i++) {
    int val;
    cin >> val;
    vet.push_back(val);
  }

  cout << contaInversoes(vet) << endl;
  return 0;
}
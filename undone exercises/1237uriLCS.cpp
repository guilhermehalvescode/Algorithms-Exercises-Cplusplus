#include <bits/stdc++.h>

using namespace std;

int subLen(string a, string b){
  int soma, j;
  vector <int> maiores;
  do{
    j = 0;
    for(int i = 0; i < a.size(); i++){
      soma = 0;
      if(b[j] == a[i]){
        int auxi = i, auxj = j;
        while(b[auxj] == a[auxi]){
          soma++;
          auxi++;
          auxj++;
        }
      }
      maiores.push_back(soma);
    }
    j++;
  }while(j != b.size() - 1);
  int maior = maiores[0];
  for(auto p : maiores)
    if(p > maior)
      maior = p;

  return maior;
}

int main(){
  string a, b;
  while(getline(cin, a)){
    cin.ignore();
    getline(cin, b);
    int res1 = subLen(a ,b), res2 = subLen(b ,a);
    if(res1 > res2)
      cout << res1 << '\n';
    else if(res2 > res1)
      cout << res2 << '\n';
    else
      cout << res2 << '\n';
  }
  
  return 0;
}
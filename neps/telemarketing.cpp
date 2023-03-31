#include <bits/stdc++.h>
#define MAX 1010

using namespace std;

typedef pair<int, int> ii;
int vendedores[MAX];

struct Compare
{
  bool operator()(const ii &a, const ii &b)
  {
    if(a.first != b.first)
      return a.first > b.first;
    
    return b.second > a.second;
  }
};

int main()
{
  int n, l;

  priority_queue<ii, vector<ii>, Compare> pq;

  cin >> n >> l;

  for (int i = 1; i <= n; i++)
  {
    pq.push({0, i});
  }

  for (int i = 0; i < l; i++)
  {
    int t;

    cin >> t;

    ii tempoSaida = pq.top();
    pq.pop();

    vendedores[tempoSaida.second]++;

    pq.push({t, tempoSaida.second});
  }

  for (int i = 1; i <= n; i++)
  {
    cout << i << " " << vendedores[i] << endl;
  }

  return 0;
}
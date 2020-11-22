#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, k, u, temp; cin >> n >> k >> u;
    vector <int> cartelas[n];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++)
            cin >> temp;
            cartelas[i].push_back(temp);
    }
    int e;
    for(int i = 0; i < u; i++){
        cin >> e;
        for(int j = 1; i <= k; j++){
            
            cartelas[j].erase()
        }
    }

    return 0;
}
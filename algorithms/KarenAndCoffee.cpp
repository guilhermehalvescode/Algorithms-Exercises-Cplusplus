#include <bits/stdc++.h>

using namespace std;

int intervalo[200010];
int aparicoes[200010];
int aceito[200010];


int main(){
    int n, k, q; cin >> n >> k >> q;

    int l, r;
    for(int i = 0; i < n; i++){
        cin >> l >> r;
        intervalo[l] = 1;
        intervalo[r + 1] = -1;
    }
    
    int x = 0;
    for(int i = 1; i <= 200000; i++){
        x += intervalo[i];
        aparicoes[i] = x;
    }

    for(int i = 1; i <= 200000; i++){
        if(aparicoes[i] >= k) aceito[i] = 1; 
        else aceito[i] = 0;
        aceito[i] += aceito[i - 1];
    }
    for(int i = 0; i < q; i++){
        cin >> l >> r;
        cout << aceito[r] - aceito[l - 1];
        if(i != q - 1) cout << endl;
    }
    return 0;
}
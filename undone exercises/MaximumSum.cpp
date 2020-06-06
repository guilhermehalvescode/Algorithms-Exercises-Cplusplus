#include <bits/stdc++.h>
#define NMAX 110

using namespace std;

int sum[NMAX][NMAX];


int main(){
    int a, maior; cin >> a;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            cin >> sum[i][j];
            if(i == 0 && j == 0) maior = sum[0][0];
            if(j > 0) sum[i][j] += sum[i][j - 1];
            if(i > 0) sum[i][j] += sum[i - 1][j];
            if(i > 0 && j > 0) sum[i][j] -= sum[i - 1][j - 1];
            if(sum[i][j] > maior && (i != a - 1 || j != a - 1))
                maior = sum[i][j];
        }
    }

    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++)
            cout << " [" << sum[i][j] << "]";
        cout << endl;
    }

    
    cout << maior << endl;
    


    return 0;
}
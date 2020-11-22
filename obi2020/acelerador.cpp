#include <bits/stdc++.h>

using namespace std;


int main(){
    int n; cin >> n;
    n -= 3;
    if(n <= 8) {
        if(n == 5) cout << 3 << endl;
        else if(n == 4) cout << 2 << endl;
        else if(n == 3) cout << 1 << endl;
    } else {
        n = n % 8;
        if(n == 5) cout << 3;
        else if(n == 4) cout << 2 << endl;
        else if(n == 3) cout << 1 << endl;
    }

    return 0;
}
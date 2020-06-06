#include <bits/stdc++.h>

using namespace std;

int main(){
    map <long int, long int> comp;

    int c, n; cin >> c >> n;
    for(int i = 0; i < c; i++){
        long int prog, vers; cin >> prog >> vers;
        comp[prog] = vers;
    }
    for(int i = 0; i < n; i++){
        long int prog, vers; cin >> prog >> vers;
        
        if(comp[prog] < vers)
            cout << prog << ' ' << vers << endl;
    }
    return 0;
}
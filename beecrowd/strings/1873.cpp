#include <bits/stdc++.h>

using namespace std;


unordered_map<string, vector<string>> quemGanha;


string jogadorGanha(string p1, string p2) {
    if(p1 == p2) 
        return "empate";


    vector<string> ganhaDe = quemGanha[p1];

    for(string str : ganhaDe) {
        if(str == p2)
            return "rajesh";
    }

    return "sheldon";
}

int main() {

    int n; cin >> n;
    string rajesh, sheldon;

    vector <string> str;
    
    quemGanha["tesoura"] = {"papel", "lagarto"};
    quemGanha["papel"] = {"pedra", "spock"};
    quemGanha["pedra"] = {"lagarto", "tesoura"};
    quemGanha["lagarto"] = {"spock", "papel"};
    quemGanha["spock"] = {"pedra", "tesoura"};


    while(n--) {
        cin >> rajesh >> sheldon;

        cout << jogadorGanha(rajesh, sheldon) << endl;
    }



    return 0;
}
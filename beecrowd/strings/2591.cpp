#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, firstCounter, secondCounter, index; 
    string ent;
    
    cin >> n;

    while(n--) {
        cin >> ent;


        firstCounter = 0;
        secondCounter = 0;

        for(index = 1; ent[index] == 'a'; index++, firstCounter++);

        for(index = index + 3; ent[index] == 'a'; index++, secondCounter++);
        

        cout << "k";

        int res = secondCounter * firstCounter;

        while(res--) {
            cout << "a" ;
        }

        cout << endl;




    }



    return 0;
}
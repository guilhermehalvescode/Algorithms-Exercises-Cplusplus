#include <bits/stdc++.h>

using namespace std;


bool ehVogal(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool evaluateString(string str) {

    int i = 0, j = str.length() - 1;

    do  {
        while(!ehVogal(str[i]) || !ehVogal(str[j])) {
            i++;
            j--;

        }

        i++;
        j--;
    } while(i < j && str[i] == str[j]);
    
    return j <= i;

}


int main() {

    string entrada;

    cin >> entrada;

    cout << (evaluateString(entrada) ? 'S' : 'N');
    cout << endl;


    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int inicio, fim; 
vector <int> adj[2];

void inverte() {
    string temp = to_string(inicio);
    char aux; 
    for(int i = 0; i < temp.length() / 2; i++){
        aux = temp[i];
        temp[i] = temp[temp.length() - i - 1];
        temp[temp.length() - i - 1] = aux;    
    }
    inicio = stoi(temp);
}

void BFS(int start){
    queue <int> q;
    q.push(start);
    while (inicio != fim){
        int u = q.front(); q.pop();
        if(fim - inicio >= 100){
            inverte();
            
        }


    }

}



int main(){
    int casos; cin >> casos;
    memset(adj, 0, sizeof(adj));
    adj[0].push_back(1);
    adj[1].push_back(0);


    while (casos--){
        cin >> inicio >> fim;
        BFS(0);

         
        cout << endl;
    }
    
    return 0;
}
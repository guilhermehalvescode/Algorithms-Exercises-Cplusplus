#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int primeiro, segundo, res;
} expressao;

int main(){
    int t;
    bool boolean = true;
    while(cin >> t){
        
        if(boolean){
            cin.ignore();
            boolean = false;
        } 
            
        vector <expressao> expressoes;
        for(int i = 0; i < t; i++){
            int first, second, answer;
            expressao var;
            string line;
            getline(cin, line);
            istringstream token {line};
            token >> first;
            token >> line;
            line[line.find('=')] = ' ';
            istringstream token2 {line};
            token2 >> second >> answer;
            var.primeiro = first;
            var.segundo = second;
            var.res = answer;
            expressoes.push_back(var);
        }
        map <string, int> pessoas;
        for(int i = 0; i < t; i++){
            string nome;
            int escolha;
            char op;
            cin >> nome >> escolha >> op;
            pessoas[nome] = 0;
            int primeiro = expressoes[escolha - 1].primeiro;
            int segundo = expressoes[escolha - 1].segundo;
            int res = expressoes[escolha - 1].res;
            int valor;
            switch(op){
                case '+':
                    valor = primeiro + segundo;
                    if(valor == res) pessoas[nome] = 1;
                    break;
                case '-':
                    valor = primeiro - segundo;
                    if(valor == res) pessoas[nome] = 1;
                    break;
                case '*':
                    valor = primeiro * segundo;
                    if(valor == res) pessoas[nome] = 1;
                    break;
                case 'I':
                    boolean = true;
                    int valor = primeiro + segundo;
                    if(valor == res) boolean = false;
                    valor = primeiro - segundo;
                    if(valor == res) boolean = false;
                    valor = primeiro * segundo;
                    if(valor == res) boolean = false;
                    if(boolean) pessoas[nome] = 1;
                    break;
            }

        }
        int contErros = 0;
        for(auto p: pessoas)
            if(p.second == 0) contErros++;
        if(contErros == t)
            cout << "None Shall Pass!" << endl;
        else if(contErros == 0)
            cout << "You Shall All Pass!" << endl;
        else {
            boolean = true;
            for(auto p: pessoas){
                if(p.second == 0){
                    if(boolean) boolean = false;
                    else cout << ' ';
                    cout << p.first;
                }
            }
            cout << endl;
        }

        expressoes.clear();
        pessoas.clear();
        boolean = true;

    }
    return 0;
}
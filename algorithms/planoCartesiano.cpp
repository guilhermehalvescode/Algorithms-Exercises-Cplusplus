// URI - 2632

#include <bits/stdc++.h>

using namespace std;

struct dados{   
    int dano, l[3];
};

struct coordenada{
    int x, y;
};

struct unidade {
    struct coordenada extre[4];
};

bool intersec(int x, int y, struct unidade quadrado, int raio){
    double menor = sqrt(pow(quadrado.extre[0].x - x, 2) + pow(quadrado.extre[0].y - y, 2));
    for(int i = 1; i < 4; i++){
        double valor = sqrt(pow(quadrado.extre[i].x - x, 2) + pow(quadrado.extre[i].y - y, 2));
        if(valor < menor) menor = valor;
    }
    if(raio >= menor) return true;
    else return false;
    

}

unordered_map <string, struct dados> magia;

int main(){
    magia["fire"].dano = 200;
    magia["fire"].l[0] = 20;
    magia["fire"].l[1] = 30;
    magia["fire"].l[2] = 50;

    magia["water"].dano = 300;
    magia["water"].l[0] = 10;
    magia["water"].l[1] = 25;
    magia["water"].l[2] = 40;

    magia["earth"].dano = 400;
    magia["earth"].l[0] = 25;
    magia["earth"].l[1] = 55;
    magia["earth"].l[2] = 70;

    magia["air"].dano = 100;
    magia["air"].l[0] = 18;
    magia["air"].l[1] = 38;
    magia["air"].l[2] = 60;
    int n; cin >> n;
    while (n--)
    {   
        int largura, altura, x, y;
        cin >> largura >> altura >> x >> y;
        struct unidade unidade;
        unidade.extre[0].x = x;
        unidade.extre[0].y = y;
        unidade.extre[1].x = x + largura;
        unidade.extre[1].y = y;
        unidade.extre[2].x = x + largura;
        unidade.extre[2].y = y + altura;
        unidade.extre[3].x = x;
        unidade.extre[3].y = y + altura;
        string magic;
        int lvl, raio;
        cin >> magic >> lvl >> x >> y;
        raio = magia[magic].l[lvl - 1];
        if(x >= unidade.extre[0].x && y >= unidade.extre[0].y && x <= unidade.extre[1].x && y >= unidade.extre[1].y && x <= unidade.extre[2].x && y <= unidade.extre[2].y && x >= unidade.extre[3].x && y <= unidade.extre[3].y)
            printf("%d\n", magia[magic].dano);
        else{

            if(x >= unidade.extre[0].x && x <= unidade.extre[1].x){
                if(y < unidade.extre[0].y)
                    printf("%d\n", raio >= unidade.extre[0].y - y ? magia[magic].dano : 0);
                if(y > unidade.extre[3].y)
                    printf("%d\n", raio >= y - unidade.extre[3].y ? magia[magic].dano : 0);
            }else if(y >= unidade.extre[0].y && y <= unidade.extre[3].y){
                if(x < unidade.extre[0].x)
                    printf("%d\n", raio >= unidade.extre[0].x - x ? magia[magic].dano : 0);
                if(x > unidade.extre[1].x)
                    printf("%d\n", raio >= x - unidade.extre[1].x ? magia[magic].dano : 0);
            }else
                printf("%d\n", intersec(x, y, unidade, raio) ? magia[magic].dano : 0);
            

        }
    }
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m=0,mp=0;
    int cp=0,n=0,soma=0,somap=0,v,maior=0,menor=0;
    printf("Digite varios numeros para dar informacoes sobre esses, digitando 0 para parar!\n");
    while(1){
        printf("Digite um numero:\n");
        scanf("%i",&v);
        if(v==0){
            break;
        }
        soma+=v;
        if(n==0){
            maior=v;
            menor=v;
        }
        if(v>maior){
            maior=v;
        }
        if(v<menor){
            menor=v;
        }
        if(v%2==0){
            somap+=v;
            cp++;
        }
        n++;
    }
    m=(float)soma/n; mp=(float)somap/cp;
    printf("A soma dos numeros digitados e: %i\nA quantidadede numeros digitados e: %i\nA media dos numeros digitados e: %.2f\nO maior numero digitado foi: %i\nO menor numero digitado foi: %i\nE a media dos numeros pares foi: %.2f",soma,n,m,maior,menor,mp);
    return 0;
}

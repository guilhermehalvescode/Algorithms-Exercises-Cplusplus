#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0,qtdade=0;
    float soma,valor_d,media;
    printf("Digite 10 valores para soma-los\nObs: Serao aceitos apenas numeros nao negativos!\n");
    while(contador<10){
        printf("\nDigite um valor:\n");
        scanf("%f",&valor_d);
        if(valor_d>=0){
            soma=soma+valor_d;
            qtdade++;
        }
        contador++;
    }
    media=soma/qtdade;
    printf("O valor da media e: %.1f",media);
    return 0;
}

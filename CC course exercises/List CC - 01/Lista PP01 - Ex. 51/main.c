#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,M;//x=coordenada x y=coordenada y M=modulo da reta formada pelo ponto fornecido pelo programa
    printf("\nCalcule o modulo de um ponto cartesiano (x,y) ate a sua origem (0,0):\nDigite dessa forma: x y:\n");
    scanf("%f%f",&x,&y);
    M=sqrt(pow(x,2)+pow(y,2));
    printf("\nO valor do modulo/distacia desse ponto a origem (0,0) e: %.1f",M);
    return 0;
}

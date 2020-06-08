#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro,c=0,soma=0;
    do{
    printf("\nDigite um numero inteiro positivo para mostrar soma de todos seus divisores:\n");
    scanf("%i",&nro);
    }while(nro<=0);
    c=nro;
    while(c>0){
        if(nro%c==0){
            soma=soma+c;
        }
        c--;
    }
    printf("\nO valor da soma desses numeros e: %i\n",soma);
    return 0;
}

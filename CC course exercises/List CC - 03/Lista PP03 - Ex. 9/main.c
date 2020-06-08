#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0,N,nro_impar=1;
    printf("Digite um valor N para imprimir a quantidade N de numeros impares naturais!!\n");
    scanf("%i",&N);
    if(N>=0){
    printf("\nOs numeros impares sao:\n");
    while(contador<N){
        printf("\n%i\n",nro_impar);
        nro_impar=nro_impar+2;
        contador++;
    }
    }else{
        printf("\nO valor digitado de N e invalido!!\n");
    }
    return 0;
}

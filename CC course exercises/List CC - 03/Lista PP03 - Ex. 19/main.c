#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro,c,d,u;
    printf("Escreva um numero inteiro entre 100 e 999 para retirar todos os algarismos desse numero:\n");
    scanf("%i",&nro);
    if(nro>=100 && nro<=999){
        c=nro/100;
        d=(nro%100)/10;
        u=nro%10;
        printf("O valor dos algarismos sao: %i %i %i",c,d,u);
    }else{
        printf("Numero digitado invalido!");
    }
    return 0;
}

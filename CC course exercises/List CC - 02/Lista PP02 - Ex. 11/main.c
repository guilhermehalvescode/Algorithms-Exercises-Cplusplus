#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro,c,d,u,soma;
    printf("Digite um numero inteiro para somar os seus algorismos:\n");
    scanf("%i",&nro);
    if (nro>99 && nro<=999){
        c=(nro/100);
        d=(nro%100)/10;
        u=(nro%10);
        soma=c+d+u;
        printf("O valor da soma dos algorismos desse numero e: %i",soma);
    }else{
        printf("O o numero e invalido!");
    }
    return 0;
}

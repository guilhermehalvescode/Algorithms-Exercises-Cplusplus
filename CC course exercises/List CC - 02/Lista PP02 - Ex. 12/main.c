#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float nro,valor;
    printf("Digite um numero inteiro:\n");
    scanf("%f",&nro);
    if (nro>0){
        valor= log(nro);
        printf("O valor do log desse numero e: %f\n",valor);
    }else{
        printf("O numero digitado e invalido!\b");
    }
    return 0;
}


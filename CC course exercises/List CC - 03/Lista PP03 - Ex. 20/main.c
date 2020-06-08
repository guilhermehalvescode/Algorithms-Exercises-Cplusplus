#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro,pares=0,check,qtdade=0;
    printf("Digite uma quantidade de numeros para verifica-los se sao pares e quantos foram digitados, digitando 1000 para\nparar a contagem de numeros!!\n");
    while(1){
 inicio:printf("Digite um numero:\n");
        scanf("%i",&nro);
        if(nro<0){
            printf("O valor digitado e invalido, digite novamente!!\n");
            goto inicio;
        }
        check=nro%2;
        if(check==0 && nro!=1000 && nro!=0){
            pares++;
        }
        if(nro==1000){
            break;
        }
    qtdade++;
    }
    printf("A quantidade de numeros lidos sao: %i\n",qtdade);
    printf("A quantidade de numeros pares sao: %i\n",pares);
    return 0;
}

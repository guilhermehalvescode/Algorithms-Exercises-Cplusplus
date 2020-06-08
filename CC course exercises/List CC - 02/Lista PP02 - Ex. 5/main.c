#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nro;
    printf("Digite um numero inteiro para verificar se esse e positivo:\n");
    scanf("%i",&nro);
    if(nro%2 == 0){
        printf("O numero digitado e par\n");
    }else{
        printf("O numero digitado e impar\n");
    }
    return 0;
}

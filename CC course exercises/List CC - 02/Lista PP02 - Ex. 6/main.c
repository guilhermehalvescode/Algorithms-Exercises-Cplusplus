#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1,nro2,diferenca;
    printf("Escreva dois numeros inteiros:\nDigite o primeiro:\n");
    scanf("%i",&nro1);
    printf("Digite o segundo:\n");
    scanf("%i",&nro2);
    if (nro1>nro2){
        diferenca=nro1-nro2;
        printf("%i e o numero maior e a diferenca entre esses e: %i",nro1,diferenca);
        }else{
            if (nro1<nro2){
            diferenca=nro2-nro1;
            printf("%i e o numero maior e a diferenca entre esses e: %i",nro2,diferenca);
            }else{
                printf("Os numeros sao iguais e a diferenca entre eles e: %i",(nro1-nro2));
            }
        }

    return 0;
}
